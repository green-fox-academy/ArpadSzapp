#include <iostream>

#include <string>



int main(int argc, char* args[]) {



    // - Create an array variable named `t`
int t[]= {1, 2, 3, 4, 5};
    //    with the following content: `[1, 2, 3, 4, 5]`
    t[2] = t[2]+1;
    // - Increment the third element

    // - Print the third element

std::cout<<t[2]<<std::endl;

    return 0;

}