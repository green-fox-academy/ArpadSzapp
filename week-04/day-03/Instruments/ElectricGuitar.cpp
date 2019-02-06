//
// Created by arpad on 2019. 02. 06..
//

#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar()
{
    _name = "Electric guitar";
    numberOfStrings = 6;
};
ElectricGuitar::ElectricGuitar(int x)
{
    _name = "Electric guitar";
    numberOfStrings = x;
};
std::string ElectricGuitar::sound()
{
    return "Twang";
}