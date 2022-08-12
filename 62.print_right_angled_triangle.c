# include <stdio.h>
int main()
{
    int number, i, j;
    printf("Enter the number of rows to form a right-angled triangle: ");
    scanf("%d", &number);
    // condition for printing n rows.
    for (i = 1; i <= number; i++)
    {
        // condition for printing a row.
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
