#include <stdio.h>
// this will introduce us to basic looping and function building.

// give a peek at your function.
void meow(int n);

int main(void)
{
    // int i = 0;
    // while (i < 3)
    // {
    //     printf("Meow \n");
    //     i++;
    // }

    int num;
    do
    {
        printf("How many times you want a meow? \n");
        scanf("%i", &num);
    }
    while (num < 1);
    meow(num);
}
// another way to loop is using for:
// for (int i=0; i<3; i++)
//{meow();}

// lastly, we want to build a function which prints meow easily.
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow \n");
    }
}

// we generally write our own functions after the main body. however, since the function will be called before it is defined,
// we will need to write the first line of our function before the beginning of main.
