# include <stdio.h>
# include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num1 > num2)
    {
        printf("Maximum of %f and %f is: %f\n",num1, num2, num1);
        printf("Minimum of %f and %f is: %f\n",num1, num2, num2);
    }
    else
    {
        printf("Maximum of %f and %f is: %f\n",num1, num2, num2);
        printf("Minimum of %f and %f is: %f\n",num1, num2, num1);
    }
    return 0;
}
