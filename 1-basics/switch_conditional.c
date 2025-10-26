#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int n;
    scanf("%i", &n);

    //switch conditional helps us define discreet cases for our use case, rather than giving a general condition.
    switch(n)
    {
        case 1:
            printf("one! \n");
            break;
        case 2:
            printf("two! \n");
            break;
        default:
            printf("cannot answer :) \n");
    }
}
