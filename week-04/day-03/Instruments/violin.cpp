//
// Created by arpad on 2019. 02. 06..
//

#include "violin.h"
Violin::Violin ()
{
    _name = "Violin";
    numberOfStrings = 4;
}

Violin::Violin (int x)
{
    _name = "Violin";
    numberOfStrings =4;
}

std::string Violin::sound ()
{
    return "Screech";
}