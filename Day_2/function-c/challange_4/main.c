#include <stdio.h>
#include <stdlib.h>

int main()
{
    smallerNum(5, 10);
    return 0;
}

void smallerNum(int a, int b) {
    if(a < b) {
        printf("%d", a);
    }
}
