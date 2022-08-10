# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = number * (-1);
        printf("Absolute Value: %d\n", number);
    }

    else
    {
        number = number * (1);
        printf("Absolute Value: %d\n", number);

    }



    return 0;
}
