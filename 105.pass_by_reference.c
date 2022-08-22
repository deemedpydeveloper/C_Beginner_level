#include <stdio.h>
void findMinMax(int num1, int num2, int *pMin, int *pMax)
{
    if (num1 > num2)
    {
        *pMax = num1;
        *pMin = num2;
    }
    else
    {
        *pMax = num2;
        *pMin = num1;
    }
}
int main()
{
    int a = 5, b = 7, min, max;
    findMinMax(a, b, &min, &max);
    printf("The Maximum of %d and %d is: %d.\n", a, b, max);
    printf("The Minimum of %d and %d is: %d.\n", a, b, min);
    return 0;
}
