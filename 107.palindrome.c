#include <stdio.h>
#define SIZE 5
int main()
{
    int i;
    int flag = 1;
    int arr[SIZE] = {1,2,3,2,1};
    for (i = 0; i < SIZE/2; i++)
    {
        if (arr[i] != arr[SIZE-1-i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("The Array is a Palindrome!!!\n");
    else
        printf("The Array is NOT a Palindrome!!!\n");
    return 0;
}
