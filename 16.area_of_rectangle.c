# include <stdio.h>

int main()
{
    double height, width, Area;

    printf("Enter the height: ");
    scanf("%lf", &height);   // %lf is used as format specifier for double data type.

    printf("Enter the width: ");
    scanf("%lf", &width);

    Area = height * width;

    printf("The area of rectangle is: %.2lf", Area);  // prints 2 digits after decimal point.

    return 0;
}
