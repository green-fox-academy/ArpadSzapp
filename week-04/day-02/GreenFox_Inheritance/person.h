//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_PERSON_H
#define GREENFOX_INHERITANCE_PERSON_H

#include <string>

enum Gender
{
    /*the gender of the person (male / female)*/
    MALE,
    FEMALE
};

class Person
{

public:
    Person ();

    Person ( std::string _name, int _age,  Gender _gender);
    /* sets name to Jane Doe, age to 30, gender to female*/


    virtual void introduce (); //prints out "Hi, I'm name, a age year old gender
    void getGoal (); //prints out "My goal is: Live for the moment!"

private:
    std::string _name; //the name of the person
    int _age; //the age of the person (whole number)
    Gender _gender;



};

#endif //GREENFOX_INHERITANCE_PERSON_H
