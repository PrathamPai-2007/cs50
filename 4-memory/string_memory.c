#include <stdio.h>

int main(void)
{
    char str[3] = "HI!";
    printf("%p\n", &str);
    printf("%p\n", &str[0]);
    printf("%p\n", &str[1]);
    printf("%p\n", &str[2]);

    //voila! strings are simply an array with the address of the string as 
    //the address of the first char and also the strings terminate when it encounters a \0 (null)
}