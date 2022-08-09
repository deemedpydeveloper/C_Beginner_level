/* Calculate the sum of n terms */

# include <stdio.h>

// Sn = (a1 + an) * n / 2
int main()
{
    float a1, an;
    int n;
    printf("Enter the first term (a1): ");
    scanf("%f", &a1);
    printf("Enter the last term (an): ");
    scanf("%f", &an);
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    printf("The Sum of n terms (Sn): %.2f", (a1 + an) * n / 2);
    return 0;
}
