/* Swapping the values */

# include <stdio.h>

int main()
{
    int a = 10, b = 20, temp;  // dummy variable to swap.

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b =%d\n", a, b);

    return 0;
}

