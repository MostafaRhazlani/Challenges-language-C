#include <stdio.h>
#include <stdlib.h>

int main()
{
    calcTwoNum(10, 20);
    return 0;
}

void calcTwoNum(int a, int b) {

    printf("%d + %d = %d", a, b, a + b);
}
