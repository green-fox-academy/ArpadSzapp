//
// Created by arpad on 2019. 02. 05..
//

#include "mentor.h"

void Mentor::getGoal ()
{
    //prints out "My goal is: Educate brilliant junior software developers."
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce ()
{
    //"Hi, I'm name, a age year old gender level mentor."
    std::cout << "Hi, I'm" << _name << ", a " << _age << "year old "
    << _gender << _level << " mentor." << std::endl;
}

Mentor::Mentor(int age, std::string name, Gender gender, Level level)
{
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;
    _level = INTERMEDIATE;
}