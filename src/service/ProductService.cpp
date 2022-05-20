//
// Created by tuddy on 20-May-22.
//

#include "ProductService.h"
#include "exceptions/service_exception.h"

ProductService::ProductService(Repo<Product> &repo) : repo(repo) {}

void ProductService::add(Product p) {
    repo.add(p);
}

vector<Product> ProductService::getAll() {
    return repo.getAll();
}

double ProductService::getPriceAverage() {
    if(repo.size() == 0){
        throw service_exception("Cannot calculate average on 0 products!");
    }

    double sum = 0;
    for(auto& p: repo.getAll()){
        sum += p.getPrice();
    }

    double avg = sum / repo.size();
    return avg;
}
