#include <iostream>
#include <string>


int factorio(int );

int main(int argc, char* args[]) {

    int num=10;

    factorio(num);

    std::cout<< factorio(num) << std::endl;
    return 0;

}

int factorio(int a){

    int s=1;
    for (int i = 1; i <= a; ++i) {
        s *=i;
    }


    return s;

}