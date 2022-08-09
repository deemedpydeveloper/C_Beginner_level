/* Temperature Conversion from fahrenheit to celsius*/

# include <stdio.h>

int main()
{
    int temp_F;
    double temp_C;

    printf("Enter the temperature in degree fahrenheits:\n");
    scanf("%d", &temp_F);

    temp_C = (double)(temp_F - 32) / 1.8;

    printf("Temperature in degree celsius: %.2lf\n", temp_C);

    return 0;
}
