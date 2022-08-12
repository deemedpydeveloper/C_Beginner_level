# include <stdio.h>

int main()
{
    int grade, sumOfGrades = 0, gradeCount = 0;
    float avg;
    printf("Enter grades or -1 to stop: ");
    scanf("%d", &grade);
    while (grade!= -1)
    {
        sumOfGrades += grade;
        gradeCount ++;
        printf("Enter grades or -1 to stop: ");
        scanf("%d", &grade);
    }
    avg = (float)sumOfGrades / gradeCount;
    printf("The Number of Grades you entered is: %d\n", gradeCount);
    if (gradeCount != 0)
        printf("The Average of %d grades is: %.2f\n", gradeCount, avg);
    else
        printf("You entered %d grades. Try again!\n", gradeCount);
    return 0;
}
