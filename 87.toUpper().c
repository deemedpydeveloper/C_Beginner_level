# include <stdio.h>
char toUpper(char letter)
{
    if (letter >= 'a' && letter <= 'z')
        return letter - 'a' + 'A';
    else
        return letter;
}
int main()
{
    char let;
    printf("Enter the letter: ");
    scanf("%c", &let);
    printf("The Uppercase letter of %c is: %c.\n", let, toUpper(let));
    return 0;
}
