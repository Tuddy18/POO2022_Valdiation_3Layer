//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_REPO_EXCEPTION_H
#define POO2022_VALDIATION_3LAYER_REPO_EXCEPTION_H


#include "custom_exception.h"

class repo_exception: public custom_exception {
public:
    repo_exception(const char *string) : custom_exception(string) {}
};


#endif //POO2022_VALDIATION_3LAYER_REPO_EXCEPTION_H
