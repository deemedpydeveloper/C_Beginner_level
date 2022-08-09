# include <stdio.h>

int main()
{
    // %d ---> integer place holder.
    printf("We had %d coins in the bank\n", 100);
    // %f ---> float place holder.
    // prints 6 digits after decimal point.
    printf("We have %f coins in the bank\n", 125.7);
    printf("Year = %d\n", 2020);
    printf("Your average grade is: %f\n", 95.13);
    printf("num1 = %d, num2 = %d, sum = %d\n", 5, 7, 5+7);
    printf("num1 = %f, num2 = %f, sum = %f\n", 5.2, 7.3, 9.5);
    printf("num1 = %d, num2 = %d, sub = %d\n", 5, 3, 5-3);
    // All the below will print same.
    printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
    printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);

    return 0;
}
