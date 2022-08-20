# include <stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE] = {1, 2, 1, 3, 6}, i, count = 0;
    for (i = SIZE - (SIZE - 1); i < (SIZE - 1); i ++)
    {
        if (arr[i] == arr[i - 1] * arr[i + 1])
            count += 1;
    }
    if (count >= 1)
        printf("The array is 'Good Neighbour'.\n");
    else
        printf("The array is not a 'Good Neighbour'.\n");
    return 0;
}
