//
// Created by tuddy on 20-May-22.
//

#include <algorithm>
#include "ProductValidator.h"

const vector<string> ProductValidator::accepted_product_names = {"Mars", "Twix", "Bounty"};

bool ProductValidator::isValid(Product t) {
    // check that product name is valid
    if(std::none_of(accepted_product_names.begin(), accepted_product_names.end(),
                    [&](const string& name){
                        return t.getName() == name;
                    })){
        return false;
    }

    if(t.getId() < 0){
        return false;
    }

    // TODO: add other relevant validation

    return true;

}
