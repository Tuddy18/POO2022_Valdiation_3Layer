//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_DOMAIN_EXCEPTION_H
#define POO2022_VALDIATION_3LAYER_DOMAIN_EXCEPTION_H


#include "custom_exception.h"

class domain_exception: public custom_exception {
public:
    domain_exception(const char *string) : custom_exception(string) {}
};


#endif //POO2022_VALDIATION_3LAYER_DOMAIN_EXCEPTION_H
