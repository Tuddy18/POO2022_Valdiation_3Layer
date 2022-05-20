//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_CUSTOM_EXCEPTION_H
#define POO2022_VALDIATION_3LAYER_CUSTOM_EXCEPTION_H

#include <stdexcept>

class custom_exception: public std::runtime_error {
public:
    custom_exception(const char *string) : runtime_error(string) {}
};


#endif //POO2022_VALDIATION_3LAYER_CUSTOM_EXCEPTION_H
