#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 == num2) {
        int sum = (num1 + num2) * 3;
        printf("(%d + %d) * 3 = %d", num1, num2, sum);
    } else {
        printf("%d + %d = %d", num1, num2, num1 + num2);
    }
    return 0;
}
