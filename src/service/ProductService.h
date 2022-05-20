//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_PRODUCTSERVICE_H
#define POO2022_VALDIATION_3LAYER_PRODUCTSERVICE_H


#include "domain/product/Product.h"
#include "repo/Repo.h"

class ProductService {
private:
    Repo<Product>& repo;

public:
    ProductService(Repo<Product> &repo);

    void add(Product p);

    vector<Product> getAll();

    double getPriceAverage();
};


#endif //POO2022_VALDIATION_3LAYER_PRODUCTSERVICE_H
