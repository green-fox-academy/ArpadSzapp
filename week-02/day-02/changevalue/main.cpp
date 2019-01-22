#include <iostream>



int main ()

{

    // Change the value of the variable called 'temperature' using a pointer

    // (you have to create the pointer first)


    float temperature = 21.3;
    float *pt_temp;
    *pt_temp = temperature;
    std::cout<< *pt_temp+1 <<std::endl;



    return 0;

}