//
// Created by arpad on 2019. 02. 11..
//

#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H
#include <string>

enum Color
{
    YELLOW, BLUE
};

class Plant
{
public:
    Plant ();
    Plant (Color color);
    virtual bool ifNeedsWater ();
    std::string getColor ();
    virtual void waterAbsorb (double increaseWaterByAmount);
    virtual void checkIfNeedsWater ();
    double getWaterAmount ();
protected:
    Color _color;
    double _waterAmount;
    std::string _name;
};

#endif //GARDEN_PLANT_H
