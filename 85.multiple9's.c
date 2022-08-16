#include <stdio.h>
void multiple9(int length)
{
    int i, number = 0;
    for (i = 0; i < length; i++)
    {
        number = number * 10 + 9;
    }
    return printf("Result: %d.\n", number);
}
int main()
{
    int len;
    printf("Enter the length of sequence: ");
    scanf("%d", &len);
    multiple9(len);
    return 0;
}
