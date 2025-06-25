#pragma once
#include <product.hpp>
#include <string>

class SimpleProduct : public IProduct{
public:
    SimpleProduct(std::string const& name, ProductsSum const& ps):IProduct(ps.protein_mg.optional(), ps.sat_fat_mg.optional(),
                 ps.unsat_fat_mg.optional(), ps.carbohydrates_mg.optional(), ps.kkal.optional(),
                 ps.fiber_mg.optional(), ps.iron_mcg.optional(), ps.magnesium_mcg.optional(), 
                 ps.calcium_mcg.optional(), ps.sodium_mcg.optional(), ps.potassium_mcg.optional(), ps.iod_mcg.optional(), ps.vit)
        ,name(name){};
    const std::string name;
};