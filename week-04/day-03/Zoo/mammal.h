//
// Created by arpad on 2019. 02. 06..
//

#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H
#include "animal.h"
class Mammal : public Animal
{
public:
    Mammal (std::string name, int age);
    std::string breed();
    int getAge();
};

#endif //ZOO_MAMMAL_H
