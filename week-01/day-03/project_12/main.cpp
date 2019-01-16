#include <iostream>

int main(int argc, char* args[]) {


    double a;
    double b;
    double c;
    double d;
    double e;

    d=(2*((a*b) + (a*c) + (b*c)));
    e=(a*b*c);
    std::cout << "Surface Area:" << d << std::endl;
    std::cout << "volume:" << e << std::endl;
    return 0;
}