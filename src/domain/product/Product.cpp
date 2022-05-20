//
// Created by tuddy on 20-May-22.
//

#include "Product.h"

Product::Product(): Entity(), name(), price() {

}

Product::Product(int id, const string &name, double price) : Entity(id), name(name), price(price) {

}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    Product::price = price;
}

istream &operator>>(istream &is, Product &product) {

    is >> product.id;
    is >> product.name;
    is >> product.price;

    return is;
}

ostream &operator<<(ostream &os, const Product &product) {
    os << "id: " << product.id << " name: " << product.name << " price: " << product.price;
    return os;
}

