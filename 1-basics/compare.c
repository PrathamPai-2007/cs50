#include <stdio.h>

int main(void)
{
    int x,y;

    printf("Whats x? \n");
    scanf("%i", &x);

    printf("Whats y? \n");
    scanf("%i", &y);

    if (x<y)
    {
        printf("x is less than y \n");
    }
    else if (x>y)
    {
        printf("x is greater than y \n");
    }
    else
    {
        printf("Both x and y are same \n");
    }
}
