# include <stdio.h>
float amountAverage(int number, int digit)
{
    int len = 0, lowerIntegers, sum = 0, count = 0;
    float avg;
    while (number != 0)
    {
        // number = 789 // digit = 8
        lowerIntegers = number % 10; // 789 % 10 = 9 // 78 % 10 = 8 // 7 % 10 = 7
        sum += lowerIntegers; // sum = 9 // sum = 9+8 = 17 // sum = 17+7 = 24
        number = number / 10; // 789 / 10 = 78 // 78 / 10 = 7 // 7 / 10 = 0
        if (lowerIntegers < digit)
            count ++; // count = 0 // count = 0 // count = 1
        len ++; // len = 1 // len = 2 // len = 3
    }
    printf("The total amount of digits in number which are less than %d is: %d.\n", digit, count);
    avg = sum / (float)len;
    return avg;
}
int main()
{
    int num, dig;
    printf("Enter a number and a digit: ");
    scanf("%d %d", &num, &dig);
    printf("The Average of digits in number %d is: %.2f.\n", num, amountAverage(num, dig));
    return 0;
}
