#include <stdio.h>
int main()
{
    int my2DArray[2][3] = {{1, 2, 3},{4, 5, 6}}, i, j;
    for (i = 0; i < 2; i ++)
    {
        for (j = 0; j < 3; j ++)
        {
            printf("The Address of my2DArray[%d][%d] is: %lu.\n", i, j, &my2DArray[i][j]);
        }
    }
    return 0;
}
