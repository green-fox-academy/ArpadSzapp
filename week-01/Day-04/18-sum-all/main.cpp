#include <iostream>

#include <string>



int main(int argc, char* args[]) {



    // - Create an array variable named `ai`

    //   with the following content: `[3, 4, 5, 6, 7]`
int ai[]= {3, 4, 5, 6, 7};
    // - Print the sum of the elements in `ai`
for(int i=0; i < sizeof(ai) / sizeof(ai[0]); ++i){
ai[i]+=ai[i];

    std::cout << ai[i] << std::endl;
}


 return 0;
}