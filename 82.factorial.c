# include <stdio.h>
int factorialOfNumber(int number)
{
    int i, result = 1;
    if (number < 0)
        return -1;
    for (i = 1;i <= number; i++)
        result = result * i;
    return result;
}
int main()
{
    int num, factorial;
    printf("Enter the number: ");
    scanf("%d", &num);
    factorial = factorialOfNumber(num);
    if (factorial == -1)
        printf("Error! Factorial doesn't exist for a negative number.\n");
    else
        printf("The Factorial of a %d is: %d.\n", num, factorial);
    return 0;
}
