# include <stdio.h>
int main()
{
    int arr[5], i, lowest_grade;
    for (i = 0; i < 5; i++)
    {
        printf("Enter %dst element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    lowest_grade = arr[0];
    for (i = 1; i < 5; i++)
    {
        if(lowest_grade > arr[i])
            lowest_grade = arr[i];
    }
    printf("The Lowest Grade is: %d.\n", lowest_grade);
    return 0;
}
