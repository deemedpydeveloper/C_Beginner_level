/* Print the reversed number */

#include <stdio.h>

int main()
{
    int number, hundredsPlace, tensPlace, unitsPlace;

    printf("Enter any three digit number: ");

    scanf("%d", &number);

    hundredsPlace = number / 100;

    tensPlace = (number % 100) / 10;

    unitsPlace = (number % 100) % 10;

    printf("The reversed number is: %d%d%d\n", unitsPlace, tensPlace, hundredsPlace);

    return 0;
}
