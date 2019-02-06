//
// Created by arpad on 2019. 02. 06..
//

#include "mammal.h"

Mammal::Mammal (std::string name, int age)
{
    _name = name;
    _age = age;
}

std::string Mammal::breed ()
{
    return " pushing miniature versions out.";
}

int Mammal::getAge ()
{
    return _age;
}