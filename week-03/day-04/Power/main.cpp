#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int powerN(int base, int N)
{
    if(N > 1){

        return base*powerN(base, N-1);

    }else{

        return base;
    }
}

int main() {


    int base;
    int N;

    std::cin>> base;
    std::cin>> N;
std::cout<<powerN(base ,N)<<std::endl;

    return 0;
}