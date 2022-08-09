/* Implicit Casting */

#include <stdio.h>

int main()
{
    int num1 = 5;
    double num2 = 2.0, result;  //making either of them floating point type, the result will also floating type.

    result = num1 / num2;  // the result will be double type.

    printf("result = %.1lf\n", result);  // result = 2.500000---> floating value.

    return 0;
}
