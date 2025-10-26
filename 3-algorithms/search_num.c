#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    
    int n;
    printf("Enter number to search for: ");
    scanf("%i", &n);

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found at position %i\n", i+1);
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}