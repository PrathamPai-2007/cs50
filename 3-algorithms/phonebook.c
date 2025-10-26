#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[] = {"Yuulia", "David", "John"};
    char *numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-617-468-2750"};

    char name[50];
    printf("Name: ");
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name, names[i]) == 0)
        {
            printf("%s\n", name);
            printf("%s\n", numbers[i]);
            return 0;
            //the return makes sure that the project is done. once 0 is returned, 
            //everything below it will not be executed.
        }
    }
    printf("Not Found..\n");
    return 1;

}