#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //turns out we need to allocate bits to store strings before even taking any user input.
    char s[100];

    printf("Input your string: ");
    scanf("%s", s);

    printf("when using toupper: ");

    //this is the easy part.
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        printf("%c", toupper(s[i]));
    }
    
    printf("\n doing hard work: ");

    //the following is the hard part.
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i]-32); //we used ascii chart.
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
