#include <stdio.h>
int main()
{
    int sequenceSize, i, currentValue = 0, previousValue = 0, count1 = 0, count2 = 0;
    printf("Enter the sequence size: ");
    scanf("%d", &sequenceSize);
    if (sequenceSize <= 0)
        printf("Sorry! Try Again.\n");
    else
    {
        for (i = 1; i <= sequenceSize; i++)
        {
            printf("Enter %dst number: ", i);
            scanf("%d", &currentValue);
            if (currentValue >= previousValue)
                count1++;
            else
                count2++;
            previousValue = currentValue;
        }
        if (count2 == 0)
            printf("The Sequence is 'Very Ascending'.\n");
        else
            printf("The Sequence is 'Not Very Ascending'.\n");
    }
    return 0;
}
