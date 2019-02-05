//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_SPONSOR_H
#define GREENFOX_INHERITANCE_SPONSOR_H

#include "person.h"
class Sponsor : Person //Create a Sponsor class that has the same members and functions as the Person class
{
public:

    Sponsor ();

    void introduce (); //"Hi, I'm name, a age year old gender who represents
    // company and hired hiredStudents students so far."

    void hire ();
    void getGoal () override;

    Sponsor (int age, std::string name, Gender gender, std::string company);
    //beside the given parameters, it sets hiredStudents to 0



protected:
    std::string _company; //name of the company
    std::string _hiredStudents; //number of students hired



};

#endif //GREENFOX_INHERITANCE_SPONSOR_H
