# include <stdio.h>
int averageGrade(int grade1, int grade2, int grade3)
{
    float average;
    average = (grade1 + grade2 + grade3) / 3.0;
    return average;
}
int main()
{
    int g1, g2, g3, result;
    printf("Enter the grades: ");
    scanf("%d %d %d", &g1, &g2, &g3);
    result = averageGrade(g1, g2, g3);
    printf("The Average of 3 grades is: %d", result);
    return 0;
}
