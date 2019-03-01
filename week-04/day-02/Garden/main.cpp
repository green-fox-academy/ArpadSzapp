#include <iostream>
#include "plant.h"
#include "flower.h"
#include "tree.h"
#include "garden.h"

int main(int argc, char * argv[])
{
    Garden firstGarden("garden");
    firstGarden.fillGarden(Color::YELLOW,Color::BLUE);

    firstGarden.checkIfPlantsNeedWater();

    firstGarden.waterGarden(40);
    firstGarden.checkIfPlantsNeedWater();

    firstGarden.waterGarden(70);
    firstGarden.checkIfPlantsNeedWater();

    return 0;
}