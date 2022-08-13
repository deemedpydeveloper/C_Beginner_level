# include <stdio.h>
int main()
{
    int multiplicand, multiplier, i = 1, result;
    printf("Enter the multiplicand: ");
    scanf("%d", &multiplicand);
    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);
    while (i <= multiplier)
    {
        result = multiplicand * i;
        printf("%d * %d = %d\n", multiplicand, i, result);
        i ++;
    }
    return 0;
}
