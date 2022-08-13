# include <stdio.h>

int main()
{
    int num, i, j, blank_spaces, k, current_value = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    // for each row.
    for (i = 1; i <= num; i ++)
    {
        // row - blankspaces condition for each row.
        blank_spaces = num - i;
        for (j = blank_spaces; j >= 1; j--)
        {
            printf(" ");
        }
        // row - numbers condition for each row.
        for (k = 1; k <= i;k ++)
        {
         printf("%d ", current_value);
         current_value += 1;
        }
        printf("\n");
    }
    return 0;
}
