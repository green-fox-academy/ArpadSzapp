//
// Created by arpad on 2019. 02. 12..
//

#ifndef AIRCRAFTCARRIER_F35_H
#define AIRCRAFTCARRIER_F35_H

#include "aircraft.h"

class F35 : public Aircraft
{
public:
    F35 ();

    std::string getType () override;
    bool isPriority () override;

};

#endif //AIRCRAFTCARRIER_F35_H
