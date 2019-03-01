#include <iostream>
#include "carrier.h"
Carrier::Carrier(int ammo, int health)
{
    _CarrierAmmo = ammo;
    _CarrierHealth = health;

}

void Carrier::add(Aircraft* aircraftOne)
{
    _aircrafts.push_back(aircraftOne);

}

void Carrier::fill() {
    try {
        for (int i = 0; i < _aircrafts.size(); i++)
            if (_aircrafts.at(i)->isPriority()) {
                if(_CarrierAmmo == 0){
                    throw 99;
                }
                _aircrafts.at(i)->refill(_CarrierAmmo);
            }

        for (int i = 0; i < _aircrafts.size(); i++)
            if (!_aircrafts.at(i)->isPriority()) {
                if(_CarrierAmmo == 0){
                    throw 99;
                }
                _aircrafts.at(i)->refill(_CarrierAmmo);
            }
    }catch (int number){
        std::cout <<" Out of Ammo!" << std::endl;
    }
}

void Carrier:: fight(Carrier &otherCarrier)
{
    int Damage = 0;

    for (int i = 0; i < _aircrafts.size(); i++){
        Damage += _aircrafts.at(i)->fight();

        otherCarrier._CarrierHealth -= Damage;
    }

}

std::string Carrier::getStatus()
{
    if (_CarrierHealth <= 0){
        return "It's dead Jim :(";
    }
    std::string result;
    std::string CarrierStatus = "HP: " + std::to_string(_CarrierHealth)
        + " , Aircraft count: " + std::to_string(_aircrafts.size()) +" , Ammo Storage: " + std::to_string(_CarrierAmmo)
        + ", Total damage: " + std::to_string(totalDamage()) + ". \n  Aircrafts: \n";

    result += CarrierStatus;

    for (int i = 0; i < _aircrafts.size(); ++i) {
        std:: string aircraftStatus = "Type " + _aircrafts.at(i)->getType() + ", Ammo: "
            + std::to_string (_aircrafts.at(i)->get_Ammo())
            + ", Base Damage: " + std::to_string(_aircrafts.at(i)->get_BaseDamage()) +", All Damage: "
            + std::to_string(_aircrafts.at(i)->DamageCalculate()) + ". \n";

        result += aircraftStatus;
    }

    return result;
}

int Carrier::totalDamage()
{
    int damage = 0;

    for (int i = 0; i < _aircrafts.size(); ++i) {
        damage += _aircrafts.at(i)->DamageCalculate();
    }

    return damage;
}