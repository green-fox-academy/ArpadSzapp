//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_PERSON_H
#define GREENFOX_INHERITANCE_PERSON_H

#include <string>

#include <string>

enum Gender {
    MALE,
    FEMALE
};

std::string GenderToString (Gender gender);

class Person
{
public:
    Person();
    Person(std::string name, int age, Gender gender);
    virtual void introduce();
    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};

#endif //GREENFOX_INHERITANCE_PERSON_H
