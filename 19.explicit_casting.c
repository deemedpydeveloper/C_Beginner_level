/* Explicit Casting */

# include <stdio.h>

int main()
{
    int num1 = 5, num2 = 2;
    double result;

    result = num1 / (double)num2;  //(double)num2 ---> converts int to floating type.

    printf("result = %.1lf\n", result);

    return 0;
}
