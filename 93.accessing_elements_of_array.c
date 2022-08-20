# include <stdio.h>
int main()
{
    int arr[5], i;
    for (i = 0; i < 5; i ++)
    {
        printf("Enter %dst number: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i ++)
    {
        printf("The %dst element is: %d.\n", i+1, arr[i]);
    }
    return 0;
}
