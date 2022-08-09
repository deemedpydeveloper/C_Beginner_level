# include <stdio.h>
# include <stdlib.h>

int main()
{
    int money, grade;
    printf("Enter grade and money: ");
    scanf("%d %d", &money, &grade);

    if (money > 50 && grade < 90)
        printf("LOGICAL AND OPERATION.\n");

    if (money > 50 || grade < 90)
        printf("LOGICAL OR OPERATION.\n");

    if (!(money > 50 && grade < 90))
        printf("LOGICAL NOT OPERATION.\n");
    return 0;
}
