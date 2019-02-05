//
// Created by arpad on 2019. 02. 05..
//
#include <iostream>
#include "sponsor.h"

void Sponsor::introduce ()
{
    //"Hi, I'm name, a age year old gender who represents
    // company and hired hiredStudents students so far."
    std::cout << "Hi, I'm" << _name << ", a " << _age << "year old " << _gender << _company << " and " << _hiredStudents
              << "students so far." << std::endl;
}

void Sponsor::hire ()
{

    _hiredStudents += 1;
};

void Sponsor::getGoal ()
{

    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;

};

Sponsor::Sponsor (int age, std::string name, Gender gender, std::string company)
//beside the given parameters, it sets hiredStudents to 0
{

    _hiredStudents = 0;
};

Sponsor (int age, std::string name, Gender gender, std::string company) :
Person(std::string _name, int _age, Gender _gender)
{
_name = "Jane Doe";
_age = 30;
_gender = FEMALE;
_company = company;
}