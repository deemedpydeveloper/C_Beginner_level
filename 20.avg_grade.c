/* Calculate the Average Grade */

# include <stdio.h>

int main()
{
    int grade1, grade2, grade3;
    double average;

    printf("Enter your grades: \n");
    scanf("%d\n%d\n%d", &grade1, &grade2, &grade3);

    average = (double)(grade1 + grade2 + grade3) / 3; // explicit casting.

    printf("The Overall Percentage is: %.2lf\n", average);  // rounding off to two digits.

    return 0;
}
