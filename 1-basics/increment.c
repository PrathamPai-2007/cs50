#include <stdio.h>

int main(void)
{
    int x=1;
    printf("%d %d\n",x++, ++x);
    printf("%d %d\n",++x, x++);
    x=1;
    printf("%d %d\n",++x, x++);

    x = 5;
    x+=x++ + ++x;
    printf("%d\n",x);
}