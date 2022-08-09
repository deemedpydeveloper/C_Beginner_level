/*Calculate the nth term of arithmetic sequence.*/

# include <stdio.h>

// an = a1 + (n-1)*d --> formula to calculate.

int main()
{
    float a1, d;
    int n;
    printf("Enter the initial term (a1): ");
    scanf("%f", &a1);
    printf("Enter the difference in the Arithmetic Sequence: ");
    scanf("%f", &d);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    printf("The n-th term of the Arithmetic Sequence = %f\n", a1 + (n - 1) * d);
    return 0;
}
