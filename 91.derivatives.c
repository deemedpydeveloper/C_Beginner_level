# include <stdio.h>
int derivative(int constant, int variable, int power)
{
    int x;
    x = pow(variable, power - 1);
    return power * constant * x;
}
int main()
{
    int con, var, pow;
    printf("Enter the constant, variable and power: ");
    scanf("%d %d %d", &con, &var, &pow);
    printf("The Derivative of %d * %d ^ %d is: %d.\n", con, var, pow, derivative(con, var, pow));
    return 0;
}
