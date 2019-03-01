//
// Created by arpad on 2019. 02. 11..
//

#ifndef PIRATESS_PIRATE_H
#define PIRATESS_PIRATE_H
#include <iostream>

class Pirate
{
public:
    Pirate ();
    Pirate (std::string name, int drunkLevel);

    void drinkSomeRum ();
    void howsItGoingMate ();
    void passOut ();
    void die ();

private:
    std::string _name;
    int _drunkLevel;
    bool _passedOut = false;
    bool _isdead = false;

};

#endif //PIRATESS_PIRATE_H
