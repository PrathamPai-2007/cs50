#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    //our ultimate goal is to copy an entire string from one to another, then uppercase it.
    //we will use malloc(x), which will reserve x bytes of memory for the assigned variable.
    char buffer[100];
    printf("Enter your string: ");
    scanf("%s", buffer);

    if (strlen(buffer)==0)
    {
        printf("Invalid String input.\n");
        return 1;
    }
    char *s = buffer;
    //what s will store is the pointer of buffer, thus it is not copying. now we will try to
    //make a fresh copy completely from memory, in variable t.

    char *t = malloc(strlen(s)+1); //+1 for the null character.
    for (int i = 0; i <= strlen(s); i++) //<=n because we also want to copy the null character.
    {
        t[i] = s[i];
    }
    //now t is copied.

    for (int i = 0; i <= strlen(t); i++)
    {
        t[i] = toupper(t[i]);
    }

    printf("Initial: %s\n", s);
    printf("Final: %s\n", t);

    //once we are completely done using our desired malloc variable, we can free them.
    free(t);

    //instead of doing soo much, we could use libraries already present in c. namely, the strcpy function.
    //strcpy(t,s); will replace most lines of this code.
}