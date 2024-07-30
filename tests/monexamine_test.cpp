#include "cata_catch.h"

#include "monexamine.h"
#include "map_helpers.h"
#include "character.h"
#include "player_helpers.h"
#include "game.h"
#include <iuse.cpp>

static const std::string mon_dog("mon_dog_bcollie");
static const std::string mon_horse("mon_horse");

static constexpr tripoint player_location{ 66, 65, 0 };
static constexpr tripoint mon_location{ 65, 65, 0 };


TEST_CASE("monexamine_heal_bleeding", "[monexamine]")
{
    clear_map();

    Character& you = get_player_character();
    clear_avatar();
    you.setpos(player_location);

    item bandage("bandages");
    you.wield(bandage);

    monster& z = spawn_test_monster(mon_dog, mon_location);
    z.make_bleed(effect_source(&z), 1_minutes);

    CHECK(z.has_effect(effect_bleed));
    
    z.friendly = -1;
    z.add_effect(effect_pet, 1_turns, true);
    monexamine::bandage_animal(z);

    CHECK(!z.has_effect(effect_bleed));
}
