# include <stdio.h>
int main()
{
    int arr[10], i, maxValue, indexValue;
    for (i = 0; i < 10; i ++)
    {
        printf("Enter digit %d of your phone number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    maxValue = arr[0];
    for (i = 1; i < 10; i ++)
    {
        if (maxValue < arr[i])
        {
            maxValue = arr[i];
            indexValue = i;
        }
    }
    printf("The Index of array with maximum value %d is: %d.\n", maxValue, indexValue);
    return 0;
}
