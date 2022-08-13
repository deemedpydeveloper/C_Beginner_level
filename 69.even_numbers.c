# include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number of even numbers: ");
    scanf("%d", &num);
    for (i = 2; i <= num * 2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
    return 0;
}
