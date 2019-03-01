//
// Created by arpad on 2019. 02. 12..
//

#ifndef AIRCRAFTCARRIER_AIRCRAFT_H
#define AIRCRAFTCARRIER_AIRCRAFT_H

#include <string>
class Aircraft
{
public:
    Aircraft();
    int  fight();
    int get_Ammo();
    int get_BaseDamage();
    int refill(int& AmmoStock);
    virtual std::string getType()=0;
    std::string getStatus();
    virtual bool isPriority()=0;
    int DamageCalculate();


protected:
    int _MaxAmmo;
    int _BaseDamage;
    int _Ammo;
};

#endif //AIRCRAFTCARRIER_AIRCRAFT_H
