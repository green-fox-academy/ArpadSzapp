//
// Created by arpad on 2019. 02. 12..
//

#ifndef AIRCRAFTCARRIER_F16_H
#define AIRCRAFTCARRIER_F16_H

#include "aircraft.h"

class F16 : public Aircraft
{
public:
    F16 ();

    std::string getType () override;
    bool isPriority () override;

};

#endif //AIRCRAFTCARRIER_F16_H
