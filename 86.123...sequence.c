# include <stdio.h>
int sequence123(int length)
{
    int i, sequence = 0;
    for (i = 1; i <= length; i ++)
    {
        sequence = sequence * 10 + i;
    }
    return sequence;
}
int main()
{
    int len, result = 0;
    printf("Enter the length of sequence: ");
    scanf("%d", &len);
    result = sequence123(len);
    printf("The Sequence of length %d is: %d.\n", len, result);
    return 0;
}
