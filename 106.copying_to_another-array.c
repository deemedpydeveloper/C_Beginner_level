#include <stdio.h>
#define SIZE 3
int main()
{
    int arr1[SIZE]={22,12,2000},arr2[SIZE],i;
    for (i=0; i<SIZE; i++)
    {
        arr2[i]=arr1[i];
        printf("Element %d of array1 and Element %d of array2 is: %d, %d.\n",i, i, arr1[i], arr2[i] );

    }
    return 0;
}
