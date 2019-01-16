#include <iostream>

int main() {
    int a = 123;
    int b = 526;
    int c = a;
    a=b;
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    return 0;
}