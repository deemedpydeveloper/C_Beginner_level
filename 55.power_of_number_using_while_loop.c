# include <stdio.h>
int main()
{
    int num, pow, result = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power to be raised: ");
    scanf("%d", &pow);
    while (pow > 0)
    {
        result = result * num;
        pow -= 1;
    }
    if (pow == 0)
        result *= 1;
    printf("The Result is: %d\n", result);
    return 0;
}
