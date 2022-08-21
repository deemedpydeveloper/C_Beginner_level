#include <stdio.h>
#define SIZE 11
int main()
{
    int my2DArray[SIZE][SIZE], i, j;
    for (i = 1; i < SIZE; i ++)
    {
        for (j = 1; j < SIZE; j ++)
            my2DArray[i][j] = i * j;
    }
    for (i = 1; i < SIZE; i ++)
    {
        for (j = 1; j < SIZE; j ++)
            printf("%2d  ", my2DArray[i][j]);
        printf("\n");
    }
    return 0;
}
