#include <stdio.h>
#include <stdlib.h>

int main()
{
    // character
    char character;

    // enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // condition
    if(character >= 'A' && character <= 'Z') {
        printf("the character %c is uppercase", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("the character %c is lowercase", character);
    } else {
        printf("the character is not correct", character);
    }

    return 0;
}
