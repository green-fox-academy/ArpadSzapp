//
// Created by arpad on 2019. 02. 05..
//
#include <iostream>
#include "cohort.h"
Cohort::Cohort(std::string name)
{
_name = name;
}//: the name of the cohort
void Cohort::addStudent(Student * student)
{
    _students.push_back(student);
}
//: a vector of Students

void Cohort::addMentor(Mentor * mentor)
{
    _mentors.push_back(mentor);
}
//: a vector of Mentors
// functions:
//adds the given Mentor to mentors vector

void Cohort::info()
{
    std::cout << "The " <<
              _name << " cohort has " <<
              _students.size() << "students and " <<
              _mentors.size() << "mentors." << std::endl;
}