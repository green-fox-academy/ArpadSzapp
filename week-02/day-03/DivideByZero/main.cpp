#include <iostream>
#include <string>
#include <exception>

int cin(int &);

int main() {

    int num;
    cin(num);

    return 0;
}

int cin(int &a)
{
    std::cout << "Write num: ";
    std::cin >> a;

    int ten = 10;
    try {

        if (a == 0) {
            throw std::string ( " Can't divide by 0 " );
        }
        std::cout << ten / a << std::endl;

    }catch (std::string& e) {

        std::cout << e << std::endl;
    }
}