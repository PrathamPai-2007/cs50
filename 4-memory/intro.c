#include <stdio.h>

int main(void)
{
    //& is the adress operator
    //* is the dereference operator
    //%p is used in printf to print pointers.
    //a pointer is a variable that stores the adress of something. defined as *var_name.
    
    int n = 50;
    int *p = &n; //we give int data type because n is an integer.
    printf("address of n is: %p\n", &n);
    //direct way of calling address:
    printf("address of n is: %p\n", &n);

    //you can now specify the address of a variable to return its value! :o

    printf("n is: %i\n", *p);
}