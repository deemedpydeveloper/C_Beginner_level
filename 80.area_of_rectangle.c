# include <stdio.h>
float rectangleArea(float length, float breadth)
{
    float area;
    area = length * breadth;
    return area;
}
int main()
{
    float l, b;
    printf("Enter the length(l) & breadth(b) in metres: ");
    scanf("%f %f", &l, &b);
    printf("The Area of Rectangle is: %.2f sq.m\n", rectangleArea(l, b));
    return 0;
}
