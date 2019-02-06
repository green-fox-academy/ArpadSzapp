//
// Created by arpad on 2019. 02. 05..
//
#include <iostream>
#include "student.h"


Student::Student()
{
    _previousOrganization = "The School of Life";
}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) :
    Person(name, age, gender)
{
    _skippedDays = 0;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce()
{
    std::cout << "Hi, I'm " <<
              _name << " a " <<
              _age << " year old " <<
              _gender << " from " <<
              _previousOrganization << " who skipped " <<
              _skippedDays <<
              " from the course already." << std::endl;
}

void Student::skipDays(int skippedDays)
{
    _skippedDays +=_numberOfDays;
}