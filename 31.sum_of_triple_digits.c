/* Sum of Triple Digits */

# include <stdio.h>

int main()
{
    int threeDigitNumber, hundredsPlace, tensPlace, onesPlace;

    printf("Enter the three digit number: ");

    scanf("%d", &threeDigitNumber);

    hundredsPlace = threeDigitNumber / 100;

    tensPlace = (threeDigitNumber % 100) / 10;

    onesPlace = (threeDigitNumber % 100) % 10;

    printf("The Sum of Digits of a given three digit number is: %d\n", hundredsPlace + tensPlace + onesPlace);

    return 0;
}
