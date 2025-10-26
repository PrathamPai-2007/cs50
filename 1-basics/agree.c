#include <stdio.h>
//this shows us taking a char as user input.

int main(void)
{
    char c;
    printf("Do you agree? (y/n) ");
    scanf("%c", &c);
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed. \n");
    }
    else
    {
        printf("Invalid output. terminating...");
    }
}
