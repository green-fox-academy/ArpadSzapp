//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_MENTOR_H
#define GREENFOX_INHERITANCE_MENTOR_H
#include<iostream>
#include "person.h"

enum Level
{ /*the level of the mentor (junior / intermediate / senior)*/
    JUNIOR, INTERMEDIATE, SENIOR
};

class Mentor : Person /*Create a Mentor class that has the same members
                       * and functions as the Person class*/
{
public:
    Mentor ();

    void getGoal ();    //prints out "My goal is: Educate brilliant junior software developers."

    void introduce () override;  //"Hi, I'm name, a age year old gender level mentor."

    Mentor (int age, std::string name, Gender gender, Level level);

private:
    Level _level;

};

#endif //GREENFOX_INHERITANCE_MENTOR_H
