# include <stdio.h>
# include <stdlib.h>

int main()
{
    char grade;
    printf("Enter the grade between (A - D): ");
    scanf("%c", &grade);
    switch (grade)
    {
        case 'A':
            printf("Your marks in range 90 - 100.\n");
            break;
        case 'B':
            printf("Your marks in range 80 - 89.\n");
            break;
        case 'C':
            printf("Your marks in range 70 - 79.\n");
            break;
        case 'D':
            printf("Your marks in range 60 - 69.\n");
            break;
        default:
            printf("Your entered wrong grade.\n");
            break;
    }
    return 0;
}
