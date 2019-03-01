//
// Created by arpad on 2019. 02. 11..
//

#include "pirate.h"
Pirate::Pirate ()
{}
Pirate::Pirate (std::string name, int drunkLevel)
{

    _name = name;
    _drunkLevel = drunkLevel;
}
void Pirate::drinkSomeRum ()
{
    _drunkLevel++;
}

void Pirate::passOut ()
{
    _passedOut = true;
}

void Pirate::howsItGoingMate ()
{
    if (_drunkLevel < 4) {
        drinkSomeRum();
        std::cout << "Pour me anudder!";

    } else {
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin?";
        passOut();
    }
}

void Pirate::die ()
{
    _isdead = true;
}


