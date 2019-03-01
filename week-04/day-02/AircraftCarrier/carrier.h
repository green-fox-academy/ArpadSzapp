//
// Created by arpad on 2019. 02. 12..
//

#ifndef AIRCRAFTCARRIER_CARRIER_H
#define AIRCRAFTCARRIER_CARRIER_H

#include <vector>
#include "aircraft.h"

class Carrier
{
public:
    Carrier (int ammo, int health);

    void fill ();
    void fight (Carrier &OtherCarrier);
    std::string getStatus ();
    int totalDamage ();
    void add (Aircraft *aircraftOne);

private:
    std::vector<Aircraft *> _aircrafts;
    int _CarrierAmmo;
    int _CarrierHealth;

};

#endif //AIRCRAFTCARRIER_CARRIER_H
