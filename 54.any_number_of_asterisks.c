# include <stdio.h>
int main()
{
    int num_of_asterisks, count = 0;
    printf("Enter the number of asterisks to be printed on screen: ");
    scanf("%d", &num_of_asterisks);
    while (count < num_of_asterisks)
    {
        printf("*");
        count += 1;
    }
    printf("\n");
    return 0;
}
