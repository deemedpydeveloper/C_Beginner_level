# include <stdio.h>
int main()
{
    int num, oddSum = 0;
    while (num != 00)
    {
        printf("Enter the number and '00' to stop: ");
        scanf("%d", &num);
        if (num % 2 != 0)
            oddSum += num;
    }
    printf("The Odd Sum is: %d\n", oddSum);
    return 0;
}
