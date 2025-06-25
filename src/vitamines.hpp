#pragma once
#include <ints.hpp>

struct Vitamines{
    weak_u32 a_mcg;
    weak_u32 b1_mcg;
    weak_u32 b2_mcg;
    weak_u32 b3_mcg;
    weak_u32 b5_mcg;
    weak_u32 b6_mcg;
    weak_u32 b7_mcg;
    weak_u32 b9_mcg;
    weak_u32 b12_mcg;
    weak_u32 c_mcg;
    weak_u32 d_mcg;
    weak_u32 e_mcg;
    weak_u32 k_mcg;

    Vitamines operator+(Vitamines const& other) const{
        Vitamines result;
        result.a_mcg = a_mcg + other.a_mcg;
        result.b1_mcg = b1_mcg + other.b1_mcg;
        result.b2_mcg = b2_mcg + other.b2_mcg;
        result.b3_mcg = b3_mcg + other.b3_mcg;
        result.b5_mcg = b5_mcg + other.b5_mcg;
        result.b6_mcg = b6_mcg + other.b6_mcg;
        result.b7_mcg = b7_mcg + other.b7_mcg;
        result.b9_mcg = b9_mcg + other.b9_mcg;
        result.b12_mcg = b12_mcg + other.b12_mcg;
        result.c_mcg = c_mcg + other.c_mcg;
        result.d_mcg = d_mcg + other.d_mcg;
        result.e_mcg = e_mcg + other.e_mcg;
        result.k_mcg = k_mcg + other.k_mcg;
        return result;
    }
};