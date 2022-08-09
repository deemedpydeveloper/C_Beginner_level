/* Calculate the power of a given number */

# include <stdio.h>
# include <math.h>

int main()
{
    int X, xSquare, xCube, xFour;

    printf("Enter the number: ");

    scanf("%d", &X);

    xSquare = pow(X, 2);

    xCube = pow(X, 3);

    xFour = pow(X, 4);

    printf("The Powers are: %d %d %d\n", xSquare, xCube, xFour);

    return 0;
}
