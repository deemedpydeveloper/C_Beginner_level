# include <stdio.h>
// ('0' - '9') ---> (48 - 57) ---> ASCII Values.
int digits3(char a, char b, char c)
{
    int hundreds, tens, units, finalResult;
    if (a >= '0' && a <= '9')
        hundreds = a - '0';
    else
        return 0;
    if (b >= '0' && b <= '9')
        tens = b - '0';
    else
        return 0;
    if (c >= '0' && c <= '9')
        units = c - '0';
    else
        return 0;
    return hundreds * 100 + tens * 10 + units;
}




int main()
{
    char num1, num2, num3;
    printf("Enter the 3 characters: ");
    scanf("%c %c %c", &num1, &num2, &num3);
    printf("The 3 digits are: %d.\n", digits3(num1, num2, num3));
    return 0;
}
