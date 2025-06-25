#pragma once

#include <simpleproduct.hpp>

// class for future, maybe will use some static variables, so static functions instead of nms-ed functions
struct ProductsFactory{
    static ProductsSum calcStandardToMass(u32 mass_g, ProductsSum const&);
    static SimpleProduct banana(u32 mass_g);
    static SimpleProduct cucumber(u32 mass_g);
    static SimpleProduct milk(u32 mass_g);
    static SimpleProduct ice_cream(u32 mass_g);
    static SimpleProduct orange_fruit(u32 mass_g);
    static SimpleProduct cacao(u32 mass_g);
    static SimpleProduct pig_meat(u32 mass_g);
    static SimpleProduct chicken_egg(u32 mass_g);
    static SimpleProduct oatmeal(u32 mass_g);
    static SimpleProduct hinkalies(u32 mass_g);
    static SimpleProduct pasta(u32 mass_g);
    static SimpleProduct water(u32 mass_g);
};