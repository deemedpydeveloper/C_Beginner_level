# include <stdio.h>

int main()
{
    //%d is called 'placeholder' since, it replaces with value 22 which is specified after comma.
    printf("My age is: %d\n", 22);
    /* Since there are 2 placeholders,
    there will be 2 replacements need to done.
    %d is used to replace 'integer' data type. */
    printf("My age is %d now & %d tomorrow\n", 21, 22);
    // %f is used as placeholder for decimal numbers.
    printf("My percentage is : %f\n", 93.7);
    // for getting exact number of digits after decimal point, use format specifier as '%.nf'.
    printf("My percentage is : %.1f", 93.7);
    printf("My percentage is : %.2f", 93.7);
    return 0;
}
