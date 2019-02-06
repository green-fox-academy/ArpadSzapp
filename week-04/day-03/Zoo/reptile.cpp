//
// Created by arpad on 2019. 02. 06..
//

#include "reptile.h"

Reptile::Reptile (std::string name, int age)
{
    _name=name;
    _age= age;
}

std::string Reptile::breed ()
{
    return "laying eggs.";
}

int Reptile::getAge ()
{
    return _age;
}