/* Employee Salary Calculator */

# include <stdio.h>

int main()
{
    int salary_per_hour, total_hours;
    printf("Enter the salary earned per hour: ");
    scanf("%d", &salary_per_hour);
    printf("Enter the total hours worked in a month: ");
    scanf("%d", &total_hours);
    printf("The total monthly salary of the employee is: %d$\n", salary_per_hour * total_hours);
    return 0;
}
