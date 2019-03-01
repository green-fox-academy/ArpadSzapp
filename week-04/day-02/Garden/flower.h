//
// Created by arpad on 2019. 02. 11..
//

#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H

#include "plant.h"
#include <string>

class Flower : public Plant
{
public:
    Flower();
    Flower(Color color);
    bool ifNeedsWater() override;
    void waterAbsorb(double increaseWaterByAmount) override;
    void checkIfNeedsWater() override;
};

#endif //GARDEN_FLOWER_H
