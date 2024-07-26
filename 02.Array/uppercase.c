#include <string.h>
#include <cs50.h>
#include <stdio.h>
/* 
#include <ctype.h> 
toupper(s[i]) == s[i] - ('a' - 'A')
*/

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}