#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j, temp;

    printf("Enter the number of element: ");
    scanf("%d", &num);

    int array[num], arrayTwo[num];

    for(i = 0; i < num; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < num; i++) {
        arrayTwo[i] = array[i];
    }

    printf("First Array before copie \n");
    for(i = 0; i < num; i++) {
        printf("%d \n", array[i]);
    }

    printf("second Array after copie \n");

    for(i = 0; i < num; i++) {
        printf("%d \n", arrayTwo[i]);
    }


    return 0;
}


