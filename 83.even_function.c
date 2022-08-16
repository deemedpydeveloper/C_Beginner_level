# include <stdio.h>
int isEven(number)
{
    if (number % 2 == 0)
        return 1;
    return 0;
}
int main()
{
    printf("'1' means True and '0' means False.\n");
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The Given Number %d is even: %d\n", num, isEven(num));
    return 0;
}
