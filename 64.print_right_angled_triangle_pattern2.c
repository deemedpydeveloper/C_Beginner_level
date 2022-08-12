// using while loop.
# include <stdio.h>
int main()
{
    int number, i, j;
    printf("Enter the number of rows for pattern: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i ++)
    {
        j  = i;
        while (j > 0)
        {
            printf("%d", i);
            j --;
        }
        printf("\n");
    }
    return 0;
}
