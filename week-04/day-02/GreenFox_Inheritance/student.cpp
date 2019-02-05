//
// Created by arpad on 2019. 02. 05..
//
#include <iostream>
#include "student.h"

void Student::getGoal ()     //: prints out "My goal is: Be a junior software developer."
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce ()     //"Hi, I'm name, a age year old gender from previousOrganization who skipped
// skippedDays days from the course already."
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " from " << _previousOrganization
              << " who skipped " << _skippedDays << " already." << std::endl;
}

void Student::skipDays (int numberOfDays) //increases skippedDays by numberOfDays
{
    _skippedDays += numberOfDays;
}

Student::Student ()    //sets name to Jane Doe, age to 30, gender to female, previousOrganization to The School of Life,
{
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}