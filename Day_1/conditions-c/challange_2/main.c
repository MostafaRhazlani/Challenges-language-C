#include <stdio.h>
#include <stdlib.h>

int main()
{

    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    switch(character)
    {
        case 'a':
        printf("%c is a vowel", character);
        break;

        case 'e':
        printf("%c is a vowel", character);
        break;

        case 'i':
        printf("%c is a vowel", character);
        break;

        case 'o':
        printf("%c is a vowel", character);
        break;

        case 'u':
        printf("%c is a vowel", character);
        break;

        case 'y':
        printf("%c is a vowel", character);
        break;

        default:
        printf("%c is not a vowel", character);
    }
    return 0;
}
