#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%p",s);
    printf("\n");
    printf("%p",&s[1]);
    printf("\n");
    printf("%c",*(s+1));
    // printf("%p",*(s+1));
}
