#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}

int main(void)
{
    int x = 3;
    int y = 5;

    printf("x is %i y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i y is %i\n", x, y);
    return(0);
}

