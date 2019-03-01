#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    char _name[30];
    float _price;
    float _weight;

} Sandwich;

float priceOfSandwich(Sandwich sandwich, int number_of_sandwich);

int main ()
{
    Sandwich chicken1;
    strcpy(chicken1._name, "Chicken sandwich with tomato");
    chicken1._price = 21.70;
    chicken1._weight = 550;

    Sandwich chicken2;
    strcpy(chicken2._name, "Chicken sandwich with hot pepper and greek salad");
    chicken2._price = 50.90;
    chicken2._weight = 460;

    printf("\nYour sandwich(es) price is: %.2f $", priceOfSandwich(chicken1, 4));
    printf("\nYour sandwich(es) price is: %.2f $", priceOfSandwich(chicken2, 3));
    return 0;
}

float priceOfSandwich(Sandwich sandwich, int number_of_sandwich)
{
    float price;

    price = sandwich._price * number_of_sandwich;
    return price;
}