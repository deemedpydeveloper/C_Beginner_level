/* Calculate the distance between two given points */

# include <stdio.h>
# include <math.h>  // math library contains special mathematical operations.

int main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter the first X - coordinate: ");

    scanf("%f", &x1);

    printf("Enter the first Y - coordinate: ");

    scanf("%f", &y1);

    printf("Enter the second X - coordinate: ");

    scanf("%f", &x2);

    printf("Enter the second Y - coordinate: ");

    scanf("%f", &y2);

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));  // sqrt()  ---> takes value as an input to calculate the square root of a given value.

    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f",x1, y1, x2, y2, distance);

    return 0;
}
