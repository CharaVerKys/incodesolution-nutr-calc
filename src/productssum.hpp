#pragma once
#include <vitamines.hpp>
#include <ints.hpp>

struct ProductsSum{
    weak_u32 protein_mg;
    weak_u32 sat_fat_mg;
    weak_u32 unsat_fat_mg;
    weak_u32 carbohydrates_mg;
    weak_u32 kkal;

    weak_u32 fiber_mg;
    weak_u32 iron_mcg;
    weak_u32 magnesium_mcg;
    weak_u32 calcium_mcg;
    weak_u32 sodium_mcg;
    weak_u32 potassium_mcg;
    weak_u32 iod_mcg;

    Vitamines vit;
};