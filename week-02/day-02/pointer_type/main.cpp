#include <iostream>



int main ()

{

    // Create a pointer for each variable and print out the memory addresses of that variables

    // Print out the values of the pointers



    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *pt_a = &a;
    double *pt_b = &b;
    std::string *pt_name = &name;



    std::cout<<" Memory adresses: "<< pt_a <<"  "<< pt_b <<"  "<< pt_name <<std::endl;
    std::cout<<" Values: "<< *pt_a <<"  "<< *pt_b <<"  "<< *pt_name <<std::endl;
    return 0;

}