# include <stdio.h>
char toLower(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        letter = letter - 'A' + 'a';
        return letter;
    }
    else
        letter;
}
int main()
{
    char let;
    printf("Enter a letter: ");
    scanf("%c", &let);
    printf("The Lowercase of letter %c is: %c.\n", let, toLower(let));
    return 0;
}
