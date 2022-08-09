/* Temperature Conversion from celsius to fahrenheit */

# include <stdio.h>

int main()
{
    int temp_C;
    double temp_F;

    printf("Enter the temperature in degree celsius:\n");
    scanf("%d", &temp_C);

    temp_F = (double)(temp_C * 1.8) + 32;

    printf("Temperature in degree fahrenheit: %.2lf\n", temp_F);

    return 0;
}
