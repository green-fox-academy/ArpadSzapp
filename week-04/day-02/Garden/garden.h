//
// Created by arpad on 2019. 02. 11..
//

#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <string>
#include <vector>
#include "plant.h"
#include "flower.h"
#include "tree.h"

class Garden
{
public:
    Garden();
    Garden(std::string name);
    void fillGarden(Color color1, Color color2);
    void waterGarden(double waterBy);
    void checkIfPlantsNeedWater();
    int ifTreesNeedWater();
private:
    std::vector<Flower> _flowers;
    std::vector<Tree> _trees;
    std::string _name;
    int _howManyPlantNeedsWater;

};


#endif //GARDEN_GARDEN_H
