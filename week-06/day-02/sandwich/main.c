#include <stdio.h>
/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct
{
    char *_name;
    float _price;
    float _weight;

} Sandwich;

int main ()
{
    Sandwich chicken1;
    chicken1._name = "Chicken sandwich with tomato";
    chicken1._price = 21.70;
    chicken1._weight = 550;

    Sandwich chicken2;
    chicken2._name = "Chicken sandwich with hot pepper and greek salad";
    chicken2._price = 50.90;
    chicken2._weight = 460;

    printf("\n%s, theprice is: %.2f$, with awesome weight %.2fgramms", chicken1._name, chicken1._price, chicken1._weight);
    printf("\n%s, theprice is: %.2f$, with awesome weight %.2fgramms", chicken2._name, chicken2._price, chicken2._weight);

    return 0;
}