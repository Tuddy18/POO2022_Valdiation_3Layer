//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_UI_EXCEPTION_H
#define POO2022_VALDIATION_3LAYER_UI_EXCEPTION_H


#include "custom_exception.h"

class ui_exception: public custom_exception {
public:
    ui_exception(const char *string) : custom_exception(string) {}
};


#endif //POO2022_VALDIATION_3LAYER_UI_EXCEPTION_H
