#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1, 2, 3, 4 ,5};

    int a = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i < a; i++) {
        printf("%d \n", array[i]);
    }

    return 0;
}
