//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_PRODUCTVALIDATOR_H
#define POO2022_VALDIATION_3LAYER_PRODUCTVALIDATOR_H

#include <vector>
#include "Product.h"
#include "../IValidator.h"

using namespace std;

class ProductValidator: public IValidator<Product> {
private:
    static const vector<string> accepted_product_names;
public:
    bool isValid(Product t) override;
};



#endif //POO2022_VALDIATION_3LAYER_PRODUCTVALIDATOR_H
