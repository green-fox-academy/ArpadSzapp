#include <iostream>

int main()

{
    // Create a program which accepts five integers from the console (given by the user)

    // and store them in an array

    // print out the values of that array using pointers again
    int numbers[5] = {};
    int *pt_num = numbers;


    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {

        std::cout<<"write number";
        std::cin>>pt_num[i];
        for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
        std::cout<<pt_num[i]<<"; ";

    }




    return 0;

}