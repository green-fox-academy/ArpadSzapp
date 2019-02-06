//
// Created by arpad on 2019. 02. 06..
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H
#include <iostream>

class Animal
{
public:
    Animal();
    std::string getname();
    virtual std::string breed()=0;
    int getAge();

protected:
    std::string _name;
    int _age;



};

#endif //ZOO_ANIMAL_H
