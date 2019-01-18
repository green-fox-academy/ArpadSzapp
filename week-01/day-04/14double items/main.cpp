#include <iostream>
#include <string>



int main(int argc, char* args[]) {



    // - Create an array variable named `numList`
int numList []={3, 4, 5, 6, 7};
    //   with the following content: `[3, 4, 5, 6, 7]`

    // - Double all the values in the array
for(int i=0; i< sizeof(numList)/sizeof(numList[0]); ++i){

    numList[i]*=2;

    std::cout << numList[i] << std::endl;

}

    return 0;

}