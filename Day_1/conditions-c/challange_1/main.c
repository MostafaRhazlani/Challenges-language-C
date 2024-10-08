#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num % 2;
    if(result == 0) {
        printf("the number %d is pair:", num);
    } else {
        printf("the number %d is impair:", num);
    }

    return 0;
}
