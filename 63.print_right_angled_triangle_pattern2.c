// using for loop.
# include <stdio.h>
int main()
{
    int number, i, j;
    printf("Enter the number of rows to be in pattern: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i ++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
