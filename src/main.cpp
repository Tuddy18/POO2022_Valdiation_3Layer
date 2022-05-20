//
// Created by tuddy on 20-May-22.
//

#include <iostream>
#include "domain/product/Product.h"
#include "domain/product/ProductValidator.h"
#include "repo/Repo.h"
#include "service/ProductService.h"
#include "ui/ShopController.h"


int main(){

    ProductValidator productValidator;
    IValidator<Product>& validator = productValidator;

    Repo<Product> repo(validator);
    ProductService service(repo);
    ShopController controller(service);

    controller.runMenu();

    return 0;
}