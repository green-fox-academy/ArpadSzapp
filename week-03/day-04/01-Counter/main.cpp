#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

int count(int n)
{
    if (n < 1) {
        return n;
    } else {
        std::cout << n << std::endl;
        return count(n -= 1);
    }

}
int main()
{
    int n;
    std::cout << "count down from: " << std::endl;
    std::cin >> n;
    return count(n);
}