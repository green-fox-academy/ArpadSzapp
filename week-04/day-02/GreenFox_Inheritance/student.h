//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_STUDENT_H
#define GREENFOX_INHERITANCE_STUDENT_H

#include "person.h"

class Student : public Person
{
public:
    Student();
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    void getGoal() override;
    void introduce() override;
    void skipDays(int skippedDays);

private:
    std::string _previousOrganization;
    int _skippedDays;
    int _numberOfDays;

};
#endif //GREENFOX_INHERITANCE_STUDENT_H
