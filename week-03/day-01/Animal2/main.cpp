#include <iostream>
#include "Animal.h"
int main()
{

   Animal cat;

    cat.eat();
    cat.eat();
    cat.eat();
    cat.drink();
    cat.drink();
    cat.play();

std::cout<<" cat hunger "<< cat.get_hunger()<<" \n cat  thirst: "<<cat.get_thirst()<<std::endl;


    return 0;
}