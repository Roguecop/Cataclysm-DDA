#pragma once
#ifndef CATA_SRC_MONEXAMINE_H
#define CATA_SRC_MONEXAMINE_H

class monster;

namespace monexamine
{
    bool add_armor(monster& z);
    bool give_items_to(monster& z);
    bool mech_hack(monster& z);
    bool mfriend_menu(monster& z);
    bool pay_bot(monster& z);
    bool pet_menu(monster& z);

    void add_leash(monster& z);
    void attach_bag_to(monster& z);
    void attach_saddle_to(monster& z);
    void bandage_animal(monster& z);
    void cull(monster& z);
    void dump_items(monster& z);
    void insert_battery(monster& z);
    void milk_source(monster& source_mon);
    void mount_pet(monster& z);
    void play_with(monster& z);
    void push(monster& z);
    void remove_armor(monster& z);
    void remove_bag_from(monster& z);
    void remove_battery(monster& z);
    void remove_harness(monster& z);
    void remove_leash(monster& z);
    void remove_saddle_from(monster& z);
    void rename_pet(monster& z);
    void shear_animal(monster& z);
    void start_leading(monster& z);
    void stop_leading(monster& z);
    void swap(monster& z);
    void tie_pet(monster& z);
    void untie_pet(monster& z);
} // namespace monexamine

#endif // CATA_SRC_MONEXAMINE_H
