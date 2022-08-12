# include <stdio.h>

int main()
{
    int price = 0, total = 0;
    do
    {
        printf("Enter the price of the product or enter -1 to stop: ");
        scanf("%d", &price);
        total += price;
    }while (price != -1);
    printf("The total price of products is: %d\n", total + 1);
    return 0;
}
