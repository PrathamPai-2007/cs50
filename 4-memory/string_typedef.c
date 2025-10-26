//in this program, we will understand what was really happening in <CS50.h> module.

#include <stdio.h>

//from now, if we write this line:
typedef char *string;

//we can do stuff like this:
int main(void)
{
string name = "Pratham";
printf("%s\n", name);
}
