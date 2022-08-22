#include <stdio.h>
int main()
{
    int a = 5, *p;
    p = &a;
    printf("The Value of Standard Variable a is: %d.\n", a);
    printf("The Value of Pointer Variable p is: %d.\n", *p);
    return 0;
}
