#include "Animal.h"

Animal::Animal()
{}

int Animal::get_hunger() const
{
    return _hunger;
}

int Animal::get_thirst() const
{
    return _thirst;
}

void Animal::eat()
{
    _hunger--;
}

void Animal::drink()
{
    _thirst--;
}

void Animal::play()
{
    _hunger++;
    _thirst++;
}