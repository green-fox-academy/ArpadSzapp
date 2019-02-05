#include <iostream>
#include "Sharpie.h"

int main ()
{
    Sharpie toner1;

    toner1.set_color("green");

    toner1.set_width(25);

    toner1.use();

    std::cout << "toner1= " << toner1.get_inkAmount() << std::endl;

    return 0;
}