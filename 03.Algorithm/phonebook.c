#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "EMMA";
    people[0].number = "010-2390-8888";

    people[1].name = "DAVID";
    people[1].number = "010-2398";

    people[2].name = "BRAIN";
    people[2].number = "010-2333-33333";

    people[3].name = "COWARD";
    people[3].number = "010-8898";

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].name, "EMMA")== 0)
        {
            printf("%s\n", people[i].number);
            return (0);
        }
    }
    printf("Not found\n");
    return (1);
}