#include <stdio.h>

void wall(int row, int column, int position);
void question(int n, int position);
void floors(int n);

int main(void)
{
    printf("\n");
    question(2,31);
    printf("\n");
    wall(4,3, 60);
    floors(180);
    printf("\n");

}

void question(int n, int position)
{
    for (int i = 0; i < position; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}

void wall(int row, int column, int position)
{
    for (int j = 0; j < column; j++)
    {
        for (int p = 0; p < position; p++)
        {
            printf(" ");
        }
        for (int i = 0; i < row; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void floors(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}