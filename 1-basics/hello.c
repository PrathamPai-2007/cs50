#include <cs50.h>
#include <stdio.h>
int main(void)
{
    printf("hello, world!\n");
//for backslash, use \\
//for using " or ' in string mode, use \"
    string answer = get_string("Whats your name? ");
    printf("hello, %s \n", answer);
}
