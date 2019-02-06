//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_MENTOR_H
#define GREENFOX_INHERITANCE_MENTOR_H
#include<iostream>
#include "person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

std::string LevelToString (Level level);

class Mentor : public Person
{
public:
    Mentor();
    Mentor (std::string name, int age, Gender gender, Level level);
    void getGoal() override;
    void introduce() override;

private:
    Level _level;
};

#endif //GREENFOX_INHERITANCE_MENTOR_H
