//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_PRODUCT_H
#define POO2022_VALDIATION_3LAYER_PRODUCT_H

#include <iostream>
#include <string>
#include <ostream>
#include "domain/Entity.h"

using namespace std;

class Product: public Entity {

private:
    string name;
    double price;

public:

    Product();

    Product(int id, const string &name, double price);

    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    friend istream &operator>>(istream &is, Product& p);

    friend ostream &operator<<(ostream &os, const Product &product);
};


#endif //POO2022_VALDIATION_3LAYER_PRODUCT_H
