#include <iostream>

#include <string>



int main(int argc, char* args[]) {



    // - Create an array variable named `s`
int s[6] = {1, 2, 3, 8, 5, 6};

    //   with the following content: `[1, 2, 3, 8, 5, 6]`

    // - Change the 8 to 4
    s[3]=4;
    // - Print the fourth element

    std::cout<< s[3] <<std::endl;

    return 0;

}