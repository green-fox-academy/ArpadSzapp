//
// Created by arpad on 2019. 02. 06..
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include "animal.h"

class Bird : public Animal
{
public:
    Bird(std::string name, int age);

    std::string breed();
    int getAge();
};

#endif //ZOO_BIRD_H
