#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[4] = {"EMMA", "ROMIO", "BRAIN", "DAVID"};
    printf("%s\n",names[1]);
    printf("%c%c%c%c\n",names[1][0],names[1][1],names[1][2],names[1][300]);
}