// function with parameters passed but with no return type.
# include <stdio.h>
void findMinMax(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("Maximum is %d.\n", num1);
        printf("Minimum is %d.\n", num2);
    }
    else
    {
        printf("Maximum is %d.\n", num2);
        printf("Minimum is %d.\n", num1);
    }
}
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    //passing a, b --> arguments as parameters to the function.
    findMinMax(a, b);
    return 0;
}
