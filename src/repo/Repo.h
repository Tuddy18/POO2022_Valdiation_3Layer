//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_REPO_H
#define POO2022_VALDIATION_3LAYER_REPO_H

#include <vector>
#include "domain/Entity.h"
#include "exceptions/repo_exception.h"
#include "domain/IValidator.h"
#include "exceptions/domain_exception.h"

using namespace std;

template <class T>
class Repo {
    // Enforce Entity based Repo (optional, can be removed - then code will not compile for non-Entity types)
    static_assert(std::is_base_of<Entity, T>::value, "T is not derived from Entity");
private:
    vector<T> entities;
    IValidator<T>& validator;

    bool IDIsUnique(T t){
        for(auto& e: entities){
            if(e.getId() == t.getId()){
                return false;
            }
        }
        return true;
    }

public:

    Repo(IValidator<T> &validator) : entities(), validator(validator) {}

    void add(T t) {
        if(!IDIsUnique(t)){
            throw repo_exception("Entity ID is already present in repo!");
        }

        if(!validator.isValid(t)){
            throw domain_exception("Entity is not valid!");
        }

        this->entities.push_back(t);
    }

    vector<T> getAll(){
        return entities;
    }

    double size(){
        return entities.size();
    }
};


#endif //POO2022_VALDIATION_3LAYER_REPO_H
