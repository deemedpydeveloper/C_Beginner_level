# include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number / 2) > 4 && (number / 2) < 50)
        printf("Double Digit Number\n");
    else if ((number / 2) > 49 && (number / 2) < 500)
        printf("Triple Digit Number\n");
    else
        printf("The Number is neither 'Double-Digit' nor 'Triple-Digit' number.\n");

    return 0;
}
