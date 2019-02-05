//
// Created by arpad on 2019. 02. 05..
//
#include "iostream"
#include "person.h"

void Person::introduce ()
{

    std::cout << "Hi, I'm " << _name << ", a " << _age << " year  old " << _gender << "." << std::endl;

}

void Person::getGoal ()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

Person::Person ()
{
    std::cout << "The constructor of Person was called" << std::endl;

    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}