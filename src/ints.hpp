#pragma once
#include <cstdint>

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;

using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;

#include <optional>
using ou32 = std::optional<u32>;

struct weak_u32{
    weak_u32() = default;
    weak_u32(std::nullopt_t):weak_counter(1){}
    weak_u32(ou32 const &startingValue);
    weak_u32(u32 const &startingValue):value_(startingValue){}
    explicit operator u32()const{return value_.value();}
    weak_u32& operator+=(weak_u32 const& other);
    weak_u32 operator+(weak_u32 const& other) const;
    u16 const& failed_sums()const{return weak_counter;}
    u32 const& value()const{return value_.value();}
    ou32 const& optional()const{return value_;}
private:
    ou32 value_;
    u16 weak_counter; // total unknown
    friend weak_u32 operator+(ou32 const& o1, ou32 const& o2);
};

inline weak_u32 operator+(ou32 const& o1, ou32 const& o2){
    if(o1 and o2){
        return weak_u32(*o1+*o2);
    }
    if(not o1 and not o2){
        weak_u32 a;
        a.weak_counter = 2;
        return a;
    }
    if(o1){
        weak_u32 b{o1};
        b.weak_counter++;
        return b;
    }else{
        // assert(o2);
        weak_u32 c{o2};
        c.weak_counter++;
        return c;
    }
}