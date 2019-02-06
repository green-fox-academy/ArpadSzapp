//
// Created by arpad on 2019. 02. 06..
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENTS_H
#define INSTRUMENTS_STRINGEDINSTRUMENTS_H
#include <iostream>
#include "instrument.h"


class StringedInstrument : public Instrument
{
protected:
    int numberOfStrings;
public:
    virtual std::string sound() = 0;
    void play();
};
#endif //INSTRUMENTS_STRINGEDINSTRUMENTS_H
