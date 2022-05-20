//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_IVALIDATOR_H
#define POO2022_VALDIATION_3LAYER_IVALIDATOR_H

template<class T>
class IValidator {
public:
    virtual bool isValid(T t) = 0;
};


#endif //POO2022_VALDIATION_3LAYER_IVALIDATOR_H
