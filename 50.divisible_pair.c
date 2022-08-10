# include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 || num2 || num3) == 0)
        printf("Cannot divide by 0, try again.\n");
    else if ((num1 % num2 == 0|| num2 % num1 == 0) && (num2 % num3 == 0 || num3 % num2 == 0) && (num3 % num1 == 0 || num1 % num3 == 0))
        printf("Divisible.\n");
    else
        printf("Not Divisible.\n");
    return 0;
}
