# include <stdio.h>

int main()
{
    int number, i;
    printf("Enter the number of numbers to print on screen: ");
    scanf("%d", &number);
    for (i = 1; i <=number; i ++)
        printf("%d\n", i);
    return 0;
}
