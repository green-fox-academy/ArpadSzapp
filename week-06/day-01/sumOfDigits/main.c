#include <stdio.h>
#include <stdlib.h>

int func (int firstNum, int secondNum);
int main ()
{
    int firstNum = 123;
    int secondNum = 2211;

    printf("%d", func(firstNum,secondNum));

    return 0;
}
int func (int firstNum, int secondNum)
{
    int result1=0;
    int result2=0;

    while ((firstNum != 0) || (secondNum != 0)) {
        result1+=(firstNum%10);
        result2+=(secondNum%10);

        firstNum/=10;
        secondNum/=10;
    }

    return result1==result2;

}



