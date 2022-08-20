#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, i;
    for (i = 0; i < SIZE; i ++)
    {
        printf("Element %d of array is: %d.\n", 9 - i + 1, arr[9 - i]);
    }
    return 0;
}
