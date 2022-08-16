# include <stdio.h>
void findMax(number)
{
    int number1, number2;
    if ((number >= 10) && (number <= 99))
    {
        number1 = number / 10;
        number2 = number % 10;
        if (number1 > number2)
            printf("%d is greater than %d.\n", number1, number2);
        else
            printf("%d is greater than %d.\n", number2, number1);
    }
    else
        printf("Error! Not a Two-Digit number.\n");
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    findMax(num);
    return 0;
}
