//
// Created by arpad on 2019. 02. 12..
//

#include "F35.h"
F35::F35 ()
{
    _MaxAmmo=12;
    _BaseDamage=50;

}
std::string F35::getType ()
{
    return "F35";
}
bool F35::isPriority ()
{
    return false;
}
