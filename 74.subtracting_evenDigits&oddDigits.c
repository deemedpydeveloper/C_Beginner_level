# include <stdio.h>
int main()
{
    int num, currentDigit, evenSum = 0, oddSum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        currentDigit = num % 10;
        if (currentDigit % 2 == 0)
            evenSum += currentDigit;
        else
            oddSum += currentDigit;
        num = num / 10;
    }
    printf("Even Digits Sum - Odd Digits Sum: %d - %d = %d", evenSum, oddSum, evenSum - oddSum);
    return 0;
}
