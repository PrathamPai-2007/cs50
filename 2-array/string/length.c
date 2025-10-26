#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("Name: ");
    scanf("%s", name);

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);

    //the entire above process can be simplified by using the string library, and calling strlen function.
    int length = strlen(name);
    printf("string length is: %i\n", length);
}
