//
// Created by arpad on 2019. 02. 06..
//

#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H
#include <iostream>
class Instrument
{
public:
    virtual void play () = 0;
protected:
    std::string _name;

};

#endif //INSTRUMENTS_INSTRUMENT_H
