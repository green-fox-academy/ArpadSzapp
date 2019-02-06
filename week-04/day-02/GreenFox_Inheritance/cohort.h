//
// Created by arpad on 2019. 02. 05..
//

#ifndef GREENFOX_INHERITANCE_COHORT_H
#define GREENFOX_INHERITANCE_COHORT_H

#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort : public Student, public Mentor
{
public:
    Cohort (std::string name); //: the name of the cohort

    void addStudent (Student *); //: adds the given Student to students vector

    void addMentor (Mentor *);  //: adds the given Mentor to mentors vector

    void info (); //: prints out "The name cohort has students.size() students and mentors.size() mentors."

private:
    std::string _name;
    std::vector<Student *> _students; //: a vector of Students;
    std::vector<Mentor *> _mentors; //: a vector of Mentors
};

#endif //GREENFOX_INHERITANCE_COHORT_H
