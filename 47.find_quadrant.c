# include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x-coordinate: ");
    scanf("%d", &x);
    printf("Enter y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("(%d,%d) belongs to 1st Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("(%d,%d) belongs to 2nd Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("(%d,%d) belongs to 3rd Quadrant.\n", x, y);
    else
        printf("(%d,%d) belongs to 4th Quadrant.\n", x, y);

    return 0;
}
