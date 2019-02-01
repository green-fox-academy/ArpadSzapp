#include <iostream>

int main()
{

    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *pt_a = &a;
    int *pt_b = &b;

    std::cout << *pt_a + *pt_b;

    return 0;

}