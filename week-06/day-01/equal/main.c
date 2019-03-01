#include <stdio.h>
int equal (int first, int second);
int main ()
{
    int first = 3;
    int second = 3;

    printf("%d", equal(first, second));

    return 0;
}
int equal (int first, int second)
{
    return first==second;
}