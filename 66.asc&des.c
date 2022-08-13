#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    for(i = num;i >= 1;i --)
    {
        printf("%d\t", i);
    }
    return 0;
}
