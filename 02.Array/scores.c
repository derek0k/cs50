#include <stdio.h>
#include <cs50.h>

const int n = 3;

float average(int length, int array[]);
int main(void)
{
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("What's your score?\n");
    }
    printf("Average :%.1f\n", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / length;
}