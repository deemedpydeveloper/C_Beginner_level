#include <stdio.h>
int main()
{
    int a, *p;
    p = &a;
    printf("The Address of Standard Variable a is: %p.\n", &a);
    printf("The Address of Pointer Variable p is: %p.\n", p);
    return 0;
}
