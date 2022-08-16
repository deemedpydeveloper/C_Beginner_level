# include <stdio.h>
int isEven(number)
{
    if (number % 2 == 0)
        return 1;
    return 0;
}
int isOdd(number)
{
    if (isEven() == 1)
        return 0;
    return 1;
}
int main()
{
    printf("'1' means True and '0' means False.\n");
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The Given Number %d is odd: %d\n", num, isOdd(num));
    return 0;
}
