# include <stdio.h>

int main()
{
    float number, decimalPart;

    printf("Enter the floating point number: ");

    scanf("%f", &number);

    int integerPart;

    integerPart = (int)number;

    printf("The Integer part of the given number is: %d\n", integerPart);

    decimalPart = number - integerPart;

    printf("The Decimal part of the given number is: %.2f\n", decimalPart);

    return 0;
}
