//
// Created by arpad on 2019. 02. 06..
//

#include "bird.h"

Bird::Bird (std::string name, int age)
{
    _name = name;
    _age = age;
}

std::string Bird::breed ()
{
    return "laying eggs.";
}

int Bird::getAge ()
{
    return _age;
}