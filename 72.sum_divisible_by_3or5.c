# include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
