# include <stdio.h>
# include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("First Number %d is greater than second number %d.\n", num1, num2);
    }
    else
    {
        printf("Second Number %d is greater than first number %d.\n", num2, num1);
    }
    return 0;
}
