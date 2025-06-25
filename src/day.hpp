#pragma once

#include <product.hpp>
#include <memory>
#include <vector>

class Day{
    std::vector<std::unique_ptr<IProduct>> products;
public:
    void addProduct(std::unique_ptr<IProduct> product){
        products.push_back(std::move(product));
    }
    ProductsSum allNutrients(){
        ProductsSum ps;
        for(auto const& each : products){
            ps = ps + *each;
        }
        return ps;
    }
};