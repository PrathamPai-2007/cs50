#include <stdio.h>

int main(void)
{
    //always put char in '' and put only strings in ""
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    
    //now lets make two prints.
    printf("%c%c%c\n", c1,c2,c3);

    printf("%i %i %i\n", c1,c2,c3);
    //the second print uses integral placeholders, thus it prints the ASCII values of HI! :)
}