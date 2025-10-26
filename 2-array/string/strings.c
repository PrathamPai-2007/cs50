#include <stdio.h>

int main(void)
{
    char s[3] = "HI!";
    printf("%s\n", s);
    //essentially, strings are just an array of chars. thats all.

    printf("%c %c %c %i %c \n", s[0],s[1],s[2],s[3],s[4]);
    //here, we can see that 0,1,2 give us the intended effect.
    //however, strings contain an extra bit of data at 3, which contains 0 (NUL) whhich basically gives us an endpoint.
    //we can use null like '\0'
    //printing anything more than the length of the string gives us garbage values, as we see in 4.

    //lets create a nested array containg strings and access them.
    char words[3][20] = {
        "Hello",
        "World",
        "C_Programming"
    };

    //accessing nested arrays can be done by simply array[outer][inner].
    printf("%c %c %c \n", words[0][0], words[0][1], words[0][2]);
    printf("%c %c %c \n", words[1][0], words[1][1], words[1][2]);
    
    return 0;
}
