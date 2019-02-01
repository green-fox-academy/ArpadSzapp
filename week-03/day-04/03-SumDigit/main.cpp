#include <iostream>

/*int sum(int ) {
    if () { //base case
        return 1;
    } else {
        return ;
    }
}

int main() {
    std::cout << sum() << std::endl;
    return 0;
}*/
int sum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sum(n / 10));
}

// Driven Program to check above
int main()
{

    int num;
    std::cout<<"write in number to sum of the digits: "<<std::endl;
    std::cin>>num;
    int result = sum(num);
    std::cout<<"Sum of digits is "<< result <<std::endl;
    return 0;
}