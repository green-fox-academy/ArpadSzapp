#include <iostream>
#include <string>


void swap(int& , int&  );
int main(int argc, char* args[]) {

    int a=15;

    int b=23;

    std::cout<< "1. " << a <<" ; "<< b << std::endl;

    swap(a,b);

    std::cout<< "2. " << a <<" ; "<< b << std::endl;

    return 0;
}

void swap( int& a, int& b){

    int c;

    c=a;
    a=b;
    b=c;
}