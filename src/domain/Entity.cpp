//
// Created by tuddy on 20-May-22.
//

#include "Entity.h"

Entity::Entity() {}

Entity::Entity(int id) : id(id) {}

int Entity::getId() const {
    return id;
}

void Entity::setId(int id) {
    Entity::id = id;
}

