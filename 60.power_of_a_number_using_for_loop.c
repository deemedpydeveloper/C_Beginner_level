# include <stdio.h>

int main()
{
    int number, power, i, result = 1;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power to be raised: ");
    scanf("%d", &power);
    for (i = 0; i < power; i++)
    {
        result = result * number;
    }
    printf("The Number %d raised to the power of %d is: %d\n", number, power, result);
    return 0;
}
