#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("n : ");
    if (n % 2 == 1)
    {
        printf("odd\n");
    }
    else 
    {
        printf("even\n");
    }
}