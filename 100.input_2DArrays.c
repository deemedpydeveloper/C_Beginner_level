#include <stdio.h>
int main()
{
    int my2DArray[2][3], i, j;
    for (i = 0; i < 2; i ++)
    {
        for (j = 0; j < 3; j ++)
        {
            printf("Enter the element of row %d column %d: ", i, j);
            scanf("%d", &my2DArray[i][j]);
        }
    }
    for (i = 0; i < 2; i ++)
    {
        for (j = 0; j < 3; j ++)
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
