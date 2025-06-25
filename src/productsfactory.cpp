#include "productsfactory.hpp"

ProductsSum ProductsFactory::calcStandardToMass(u32 mass_g, ProductsSum const& other){
    auto scale = [&mass_g](weak_u32 val) -> weak_u32 {
        return static_cast<u32>((val.value() * mass_g) / 100);
    };

    auto scale_vit = [&mass_g, &scale](const Vitamines& vit) -> Vitamines {
        return {
            scale(vit.a_mcg),
            scale(vit.b1_mcg),
            scale(vit.b2_mcg),
            scale(vit.b3_mcg),
            scale(vit.b5_mcg),
            scale(vit.b6_mcg),
            scale(vit.b7_mcg),
            scale(vit.b9_mcg),
            scale(vit.b12_mcg),
            scale(vit.c_mcg),
            scale(vit.d_mcg),
            scale(vit.e_mcg),
            scale(vit.k_mcg),
        };
    };

    return {
        scale(other.protein_mg),
        scale(other.sat_fat_mg),
        scale(other.unsat_fat_mg),
        scale(other.carbohydrates_mg),
        scale(other.kkal),

        scale(other.fiber_mg),
        scale(other.iron_mcg),
        scale(other.magnesium_mcg),
        scale(other.calcium_mcg),
        scale(other.sodium_mcg),
        scale(other.potassium_mcg),
        scale(other.iod_mcg),

        scale_vit(other.vit)
    };
}

SimpleProduct ProductsFactory::banana(u32 mass_g) {
    // mass on 100g    
    ProductsSum everything
    {
        /* protein_mg      */ 1090,
        /* sat_fat_mg      */ 112,
        /* unsat_fat_mg    */ 228,
        /* carbohydrates_mg*/ 22840,
        /* kkal            */ 89,

        /* fiber_mg        */ 2600,

        /* iron_mcg         */ 260,
        /* magnesium_mcg    */ 27000,
        /* calcium_mcg      */ 5000,
        /* sodium_mcg       */ 1000,
        /* potassium_mcg    */ 358000,
        /* iod_mcg          */ std::nullopt,

        /* vit */ {
            /* a_mcg   */ 3,
            /* b1_mcg  */ 31,
            /* b2_mcg  */ 73,
            /* b3_mcg  */ 665,
            /* b5_mcg  */ 334,
            /* b6_mcg  */ 367,
            /* b7_mcg  */ std::nullopt,
            /* b9_mcg  */ 20,
            /* b12_mcg */ 0,
            /* c_mcg   */ 8700,
            /* d_mcg   */ 0,
            /* e_mcg   */ 100,
            /* k_mcg   */ 500
        }
    };
    return SimpleProduct("Banana", calcStandardToMass(mass_g,everything));
}

SimpleProduct ProductsFactory::cucumber(u32 mass_g) {
    // mass on 100g    
    ProductsSum everything
    {
        /* protein_mg      */ 1090,
        /* sat_fat_mg      */ 112,
        /* unsat_fat_mg    */ 228,
        /* carbohydrates_mg*/ 22840,
        /* kkal            */ 89,

        /* fiber_mg        */ 2600,

        /* iron_mcg         */ 260,
        /* magnesium_mcg    */ 27000,
        /* calcium_mcg      */ 5000,
        /* sodium_mcg       */ 1000,
        /* potassium_mcg    */ 358000,
        /* iod_mcg          */ std::nullopt,

        /* vit */ {
            /* a_mcg   */ 3,
            /* b1_mcg  */ 31,
            /* b2_mcg  */ 73,
            /* b3_mcg  */ 665,
            /* b5_mcg  */ 334,
            /* b6_mcg  */ 367,
            /* b7_mcg  */ std::nullopt,
            /* b9_mcg  */ 20,
            /* b12_mcg */ 0,
            /* c_mcg   */ 8700,
            /* d_mcg   */ 0,
            /* e_mcg   */ 100,
            /* k_mcg   */ 500
        }
    };
    return SimpleProduct("Cucumber", calcStandardToMass(mass_g,everything));
}