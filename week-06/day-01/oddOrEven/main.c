#include <stdio.h>
int oddSelect (int num);
int main ()
{
    int num;
    printf("write in the num, to know odd or not:");
    scanf("%d", &num);
    printf("%d",oddSelect(num));

    return 0;
}
int oddSelect (int num)
{
    return (num%2==0);
}