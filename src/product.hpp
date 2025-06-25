#pragma once

#include "productssum.hpp"
#include <vitamines.hpp>

class IProduct{
    ou32 protein_mg;
    ou32 sat_fat_mg;
    ou32 unsat_fat_mg;
    ou32 carbohydrates_mg;
    ou32 kkal;

    ou32 fiber_mg;
    ou32 iron_mcg;
    ou32 magnesium_mcg;
    ou32 calcium_mcg;
    ou32 sodium_mcg;
    ou32 potassium_mcg;
    ou32 iod_mcg;

    Vitamines vit;

public:
    IProduct(const IProduct &) = default;
    IProduct(IProduct &&) = default;
    IProduct &operator=(const IProduct &) = default;
    IProduct &operator=(IProduct &&) = default;
    virtual ~IProduct() = default;
    IProduct(
        ou32 protein_mg,
        ou32 sat_fat_mg,
        ou32 unsat_fat_mg,
        ou32 carbohydrates_mg,
        ou32 kkal,
        ou32 fiber_mg,
        ou32 iron_mcg,
        ou32 magnesium_mcg,
        ou32 calcium_mcg,
        ou32 sodium_mcg,
        ou32 potassium_mcg,
        ou32 iod_mcg,
        Vitamines vit
    )
    :   protein_mg(protein_mg),
        sat_fat_mg(sat_fat_mg),
        unsat_fat_mg(unsat_fat_mg),
        carbohydrates_mg(carbohydrates_mg),
        kkal(kkal),
        fiber_mg(fiber_mg),
        iron_mcg(iron_mcg),
        magnesium_mcg(magnesium_mcg),
        calcium_mcg(calcium_mcg),
        sodium_mcg(sodium_mcg),
        potassium_mcg(potassium_mcg),
        iod_mcg(iod_mcg),
        vit(vit)
    {}

    ProductsSum operator+(IProduct const& other) const{
        ProductsSum ps;
        ps.protein_mg = this->protein_mg + other.protein_mg;
        ps.sat_fat_mg = this->sat_fat_mg + other.sat_fat_mg;
        ps.unsat_fat_mg = this->unsat_fat_mg + other.unsat_fat_mg;
        ps.carbohydrates_mg = this->carbohydrates_mg + other.carbohydrates_mg;
        ps.kkal = this->kkal + other.kkal;

        ps.fiber_mg = this->fiber_mg + other.fiber_mg;
        ps.iron_mcg = this->iron_mcg + other.iron_mcg;
        ps.magnesium_mcg = this->magnesium_mcg + other.magnesium_mcg;
        ps.calcium_mcg = this->calcium_mcg + other.calcium_mcg;
        ps.sodium_mcg = this->sodium_mcg + other.sodium_mcg;
        ps.potassium_mcg = this->potassium_mcg + other.potassium_mcg;
        ps.iod_mcg = this->iod_mcg + other.iod_mcg;

        ps.vit = this->vit + other.vit;
        return ps;
    }

    ProductsSum operator+(ProductsSum const& other) const{
        ProductsSum ps;
        ps.protein_mg = other.protein_mg + this->protein_mg;
        ps.sat_fat_mg = other.sat_fat_mg + this->sat_fat_mg;
        ps.unsat_fat_mg = other.unsat_fat_mg + this->unsat_fat_mg;
        ps.carbohydrates_mg = other.carbohydrates_mg + this->carbohydrates_mg;
        ps.kkal = other.kkal + this->kkal;

        ps.fiber_mg = other.fiber_mg + this->fiber_mg;
        ps.iron_mcg = other.iron_mcg + this->iron_mcg;
        ps.magnesium_mcg = other.magnesium_mcg + this->magnesium_mcg;
        ps.calcium_mcg = other.calcium_mcg + this->calcium_mcg;
        ps.sodium_mcg = other.sodium_mcg + this->sodium_mcg;
        ps.potassium_mcg = other.potassium_mcg + this->potassium_mcg;
        ps.iod_mcg = other.iod_mcg + this->iod_mcg;

        ps.vit = this->vit + other.vit;
        return ps;
    }
    friend ProductsSum operator+(ProductsSum const& other, IProduct const& this_){
        ProductsSum ps;
        ps = this_ + ps;
        return ps;
    }

};