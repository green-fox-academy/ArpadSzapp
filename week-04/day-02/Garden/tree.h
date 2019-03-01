//
// Created by arpad on 2019. 02. 11..
//

#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H

#include "plant.h"

class Tree : public Plant
{
public:
    Tree();
    Tree(Color color);
    bool ifNeedsWater() override;
    void waterAbsorb(double increaseWaterByAmount) override;
    void checkIfNeedsWater() override;
};

#endif //GARDEN_TREE_H
