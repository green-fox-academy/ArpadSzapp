//
// Created by arpad on 2019. 02. 12..
//

#include "aircraft.h"
Aircraft::Aircraft ()
{
    _Ammo = 0;
}
int Aircraft::fight ()
{
    int Damage = _Ammo * _BaseDamage;
    _Ammo = 0;

    return Damage;
}
int Aircraft::get_Ammo ()
{
    return _Ammo;
}
int Aircraft::get_BaseDamage ()
{
    return _BaseDamage;
}
int Aircraft::refill (int &AmmoStock)
{
    int TillRefillAmmo = _MaxAmmo - _Ammo;

    while (TillRefillAmmo != 0 && AmmoStock != 0) {

        _Ammo++;
        TillRefillAmmo--;
        AmmoStock--;
    }

    return AmmoStock;
}
std::string Aircraft::getStatus ()
{
    return ("Type" + getType() + ", Ammo: " + std::to_string(_Ammo)) + ", Base Damage: " + std::to_string(_BaseDamage)
        + ", AllDamage: " + std::to_string(_Ammo * _BaseDamage);
}

int Aircraft::DamageCalculate ()
{
    return (_BaseDamage * _Ammo);
}

