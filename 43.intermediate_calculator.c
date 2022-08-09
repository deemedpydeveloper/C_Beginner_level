# include <stdio.h>
# include <stdlib.h>

int main()
{
    int num1, num2, result;
    char op;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the operator: ");
    scanf(" %c", &op);
	switch (op)
    {
        case '+' :
            result = num1 + num2;
            printf("The addition of two numbers %d %c %d is: %d\n", num1, op, num2, result);
            break;

        case '-' :
            result = num1 - num2;
            printf("The subtraction of two numbers %d %c %d is: %d\n", num1, op, num2, result);
            break;

        case '*' :
            result = num1 * num2;
            printf("The multiplication of two numbers %d %c %d is: %d\n", num1, op, num2, result);
            break;

        case '/' :
            if (num2 == 0)
                printf("You cannot perform division.\n");
            else
                result = num1 / num2;
                printf("The quotient of two numbers %d %c %d is: %d\n", num1, op, num2, result);
            break;

        case '%' :
            if (num2 == 0)
                printf("You cannot perform modulo operation.\n");
            else
                result = num1 / num2;
                printf("The remainder of two numbers %d %c %d is: %d\n", num1, op, num2, result);
            break;

        default :
            printf("You entered wrong input");
            break;
    }
    return 0;
}
