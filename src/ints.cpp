#include "ints.hpp"

weak_u32::weak_u32(ou32 const &startingValue) : value_(startingValue) {
    if (not startingValue) {
        weak_counter++;
    }
}

weak_u32& weak_u32::operator+=(weak_u32 const& other){
    weak_counter+=other.weak_counter;
    if(this->value_){
        if(other.value_){
            this->value_.value() += other.value_.value();
            return *this;
        }
    }
    weak_counter++;
    if(not this->value_ and other.value_){
        this->value_ = other.value_;
    }
    return *this;
}

weak_u32 weak_u32::operator+(weak_u32 const& other) const{
    weak_u32 new_;
    if(this->value_ and other.value_){
        new_.value_ = this->value_.value() + other.value_.value();
    }
    else if(not this->value_ and other.value_){
        new_.value_ = other.value_;
    }
    else if(this->value_ and not other.value_){
        new_.value_ = this->value_;
    }else{}
    new_.weak_counter = this->weak_counter + other.weak_counter;
    return new_;
}