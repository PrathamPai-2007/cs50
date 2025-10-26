#include <stdio.h>

void main(void)
{
    int numbers;
    printf("Enter the number of scores to be averaged: ");
    scanf("%i", &numbers);

    int score[numbers];
    for (int i = 0; i < numbers; i++)
    {
        int n;
        printf("Enter score %i: ", i+1);
        scanf("%i", &n);
        score[i] = n;
    }
    
    float sum = 0;

    for (int i = 0; i < numbers; i++)
    {
        sum += score[i];
    }

    float avg = (float) sum/numbers;
    printf("The average of these numbers are: %f \n", avg);
}