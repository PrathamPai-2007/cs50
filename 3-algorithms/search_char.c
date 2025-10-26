#include <stdio.h>
#include <string.h>
//we will use a new function called strcmp. it returns 0 if both are same, positive if s1 after s2 and negative if s1 before s2.

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    char s[50];
    printf("Input your string: ");
    scanf("%s", s);

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found at position %i\n", i+1);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}