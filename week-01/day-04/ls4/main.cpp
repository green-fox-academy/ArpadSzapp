#include <iostream>
#include <string>


int sum(int );
int main(int argc, char* args[]) {

int num=10;


sum(num);

    // - Write a function called `sum` that sum all the numbers

    //   until the given parameter and returns with an integer


    std::cout<< sum(num) << std::endl;
    return 0;

}

int sum(int a){

    int s=0;
    for (int i = 1; i <= a; ++i) {
        s +=i;
    }


    return s;

}