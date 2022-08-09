# include <stdio.h>
# include <stdlib.h>

int main()
{
    int num1, num2, num3, max, min;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;
    min = num2;

    if (num1 < num2)
    {
        max = num2;
        min = num1;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num3 < min)
    {
        min = num3;
    }
    printf("Maximum of 3 numbers is: %d\n", max);
    printf("Minimum of 3 numbers is: %d\n", min);

    return 0;
}
