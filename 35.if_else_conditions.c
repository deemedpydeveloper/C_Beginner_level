# include <stdio.h>
# include <stdlib.h>

int main()
{
    int grade;
    scanf("%d", &grade);

    if (grade >= 60)
    {
        printf("Congratulations! You Passed.");
    }
    else
    {
        printf("You failed!, Try Again.");
    }
    return 0;
}
