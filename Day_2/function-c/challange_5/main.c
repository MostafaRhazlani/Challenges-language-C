#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    factorialNum(number);
    return 0;
}

void factorialNum(int num) {

    int res = 1;
    for(int i = 2; i <= num; i++) {
        res = res * i;
    }
    printf("Factorial of a Number %d is: %d \n", num, res);

}
