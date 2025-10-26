//takes user input and prints sum.
#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Enter number 1: ");
    scanf("%i", &a);
    printf("Enter number 2: ");
    scanf("%i", &b);
    printf("Sum of %i and %i is: %i \n", a,b,a+b);
}
