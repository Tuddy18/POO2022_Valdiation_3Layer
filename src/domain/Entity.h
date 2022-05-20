//
// Created by tuddy on 20-May-22.
//

#ifndef POO2022_VALDIATION_3LAYER_ENTITY_H
#define POO2022_VALDIATION_3LAYER_ENTITY_H


class Entity {
protected:
    int id;
public:
    Entity();

    Entity(int id);

    int getId() const;

    void setId(int id);
};


#endif //POO2022_VALDIATION_3LAYER_ENTITY_H
