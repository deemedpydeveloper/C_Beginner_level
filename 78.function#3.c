//function with no parameters but with return type.
# include <stdio.h>
int maxBetween3()
{
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 > num2) && (num1 > num3))
        return num1;
    else if ((num2 > num1) && (num2 > num3))
        return num2;
    else
        return num3;
}
int main()
{
    int max;
    max = maxBetween3();
    printf("The maximum is %d\n", max);
    return 0;
}
