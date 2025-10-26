#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;

int main(void)
{    
    person people[3];

    //now let us rebuild our phonebook app using this.

    people[0].name = "David";
    people[0].number = "123";

    people[1].name = "John";
    people[1].number = "456";

    people[2].name = "Pai";
    people[2].number = "789";

    char n[50];
    printf("Enter Name: ");
    scanf("%s", n);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, n) == 0)
        {
            printf("Found: %s\n", n);
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}