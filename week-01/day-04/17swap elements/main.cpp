#include <iostream>
#include <string>

int main(int argc, char* args[]) {



    // - Create an array variable named `abc`

    //   with the following content: `["first", "second", "third"]`
std::string abc[]= {"first", "second", "third"};
    // - Swap the first and the third element of `abc`

for(int i=0; i<sizeof(abc)/ sizeof(abc[0]); ++i){
    std::string b[2];

    b[0]=abc[0];
    b[1]=abc[2];

    abc[0]=b[1];
    abc[2]=b[0];

    std::cout<<abc[i]<<std::endl;



}

    return 0;

}