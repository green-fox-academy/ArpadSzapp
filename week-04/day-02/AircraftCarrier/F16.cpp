//
// Created by arpad on 2019. 02. 12..
//

#include "F16.h"

F16::F16 ()
{
    _MaxAmmo=8;
    _BaseDamage=30;

}
std::string F16::getType ()
{
    return "F16";
}
bool F16::isPriority ()
{
    return false;
}
