//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_STUDENT_H
#define GREENFOX_INHERITANCE_STUDENT_H
#include "person.h"

class Student : public Person
{
public:
    Student ();
    Student (int age,
             std::string name,
             Gender gender,
             std::string previousOrganization); //sets name to Jane Doe, age to 30, gender to female, previousOrganization to The School of Life,


    void getGoal ();   //: prints out "My goal is: Be a junior software developer."

    void introduce ();   //"Hi, I'm name, a age year old gender from previousOrganization who skipped skippedDays days from the course already."

    void skipDays (int numberOfDays); //increases skippedDays by numberOfDays


private:
    std::string _previousOrganization;    //the name of the student’s previous company / school
    int _skippedDays;                   //the number of days skipped from the course

};

#endif //GREENFOX_INHERITANCE_STUDENT_H
