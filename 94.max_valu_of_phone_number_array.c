# include <stdio.h>
int main()
{
    int phoneNumber[10] = {9, 8 ,4, 9, 5, 0 ,5, 3, 6, 8}, maxDigit, i;
    maxDigit = phoneNumber[0];
    for (i = 1; i < 10; i ++)
    {
        if (maxDigit < phoneNumber[i])
            maxDigit = phoneNumber[i];
    }
    printf("The Maximum number of your phone number is: %d.\n", maxDigit);
    return 0;
}
