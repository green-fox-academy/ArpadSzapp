#include <iostream>
#include "reptile.h"
#include "bird.h"
#include "mammal.h"
#include "animal.h"

int main( int argc, char* args[] )
{
    Reptile reptile("Crocodile", 10);
    Mammal mammal("Koala", 15);
    Bird bird("Parrot", 20);

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getname()<<" is "<< reptile.getAge()<< " years old" << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getname()<<" is "<< mammal.getAge()<< " years old" << " is breeding by " << mammal.breed() << std::endl;
    std::cout << "A " << bird.getname()<<" is "<< bird.getAge()<< " years old" << " is breeding by " << bird.breed() << std::endl;
}