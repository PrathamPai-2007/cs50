//There are a lot of different variables like string, int, float, long, double, char, bool, etc.
//while getting user input, the placeholders varies with the data type.

#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string ans = get_string("Whats your name? ");
    printf("Hi %s! \n", ans);

    int age = get_int("Whats your age? \n");
    if (0<age && age<52)
    {
        printf("%i years? youre younger than the c language :)\n", age);
    }
    else if (age>52)
    {
        printf("Wow! %i years? youre older than me. :)\n", age);
    }
    else
    {
        printf("You did not give valid input. terminating..\n");
    }
}
