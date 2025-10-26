#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    //writing code which is efficient in memory is very essential.
    //we really need every byte of memory as saved as possible.
    //thus it is important to free up space using free(x).
    //now, let us make a program to store an array.
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}