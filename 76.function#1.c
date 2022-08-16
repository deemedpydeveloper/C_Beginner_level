// function which has no return type and parameters.
# include <stdio.h>
void printMessage()
{
    printf("Hello!\n");
    printf("This is the function with no return type & parameters.\n");
    printf("End of user defined function.\n");
}
int main()
{
    printf("This is the main function.\n");
    printf("Calling the function.\n");
    printMessage();
    printf("No Arguments are passed as parameters to the function.\n");
    printf("End of main function.\n");
}
