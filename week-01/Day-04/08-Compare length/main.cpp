#include <iostream>
#include <string>

// - Create an array variable named `p1`

//   with the following content: `[1, 2, 3]`

// - Create an array variable named `p2`

//   with the following content: `[4, 5]`

// - Print if `p2` has more elements than `p1`

int main(int argc, char* args[]) {

    int p1[] = {1, 2, 3};
    int p2[] = {4, 5};

if(p1<p2){
    for(int i = 0; i < sizeof(p1)/sizeof(p1[0]); i++) {
        std::cout << p1[i] << std::endl;
    }}else{
    std::cout << "p2 has less elements than p1<< std::endl; "<< std::endl;
}



    return 0;
}