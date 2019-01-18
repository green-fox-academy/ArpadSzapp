#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    int a [4][4];
    //   with the following matrix. Use a loop!
    for (int i=0; i<4; i++){

        for (int j=0; j<4; j++){

            if (i==j){
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }

        }
    }
    for (int i=0; i<4; i++){
        for(int j=0; j<4; j++){

            std::cout << a[i][j]<<" ";

        }std::cout<<" "<<std::endl;


    }
    //   by dynamically, we mean here that you can change the size of the matrix

    //   by changing an input value or a parameter or this combined

    //

    //   1=i-0 ; j-0 0=i-1 j-0; 0 0

    //   0 1 0 0

    //   0 0 1 0

    //   0 0 0 1

    //

    // - Print this two dimensional array to the output



    return 0;

}