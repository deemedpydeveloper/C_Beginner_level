# include <stdio.h>
# include <stdlib.h>

int main()
{
    int grade;
    printf("Enter the grade: ");
    scanf("%d", &grade);

    if (grade >= 80)
    {
        printf("You are better.\n");
    }
    else
    {
        if (grade >= 60)
        {
            printf("You are medium.\n");
        }
        else
        {
            printf("You Failed!\n");
        }
    }
    return 0;
}
