#include <iostream>

int add(int n, int a)
{
    a = a + 1;
    if (n + 1 == a) {
        return n;

    } else
        std::cout << "asd " << a << std::endl;
    return add(n, a);

}

int main()
{
    // Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

    int n;
    int a = 0;
    std::cout << "write in a number " << std::endl;
    std::cin >> n;
    return add(n, a);
}