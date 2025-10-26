#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n\n", s[2]);

    //every chunk of memory has an address, and it is a number and we can navigate there using &.

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n\n", *(s+2));

    //now using pointers you can also cut any string up and start printing
    //from the middle to end of the string.

    printf("%s\n", s+1);
}