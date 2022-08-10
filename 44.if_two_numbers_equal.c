# include <stdio.h>
# include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
