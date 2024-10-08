#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("this number is negative");
    } else if (num > 0) {
        printf("this number is positif");
    } else {
        printf("the number is %d", num);
    }
    return 0;
}
