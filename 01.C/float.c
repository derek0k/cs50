#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price = get_float("What's the price?");
    printf("Your total is %f.\n", price * 1.0625);
}