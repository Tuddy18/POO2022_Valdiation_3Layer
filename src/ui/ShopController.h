//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_SHOPCONTROLLER_H
#define POO2022_VALDIATION_3LAYER_SHOPCONTROLLER_H

#include "service/ProductService.h"
#include<limits>

class ShopController {
private:
    ProductService& service;

    void printOptions();

    void validateInputStream(istream& is);

public:
    ShopController(ProductService &service);

    Product readProduct();

    void addProduct();

    void getAllProducts();

    void getProductPriceAverage();

    void runMenu();
};


#endif //POO2022_VALDIATION_3LAYER_SHOPCONTROLLER_H
