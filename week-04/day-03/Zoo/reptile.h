//
// Created by arpad on 2019. 02. 06..
//

#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H

#include "animal.h"
class Reptile : public Animal
{
public:

    Reptile (std::string name, int age);
    std::string breed();
    int getAge();
};

#endif //ZOO_REPTILE_H
