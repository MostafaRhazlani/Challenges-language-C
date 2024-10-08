#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j, temp;
    printf("Enter the number of element: ");
    scanf("%d", &num);

    int array[num];

    for(i = 0; i < num; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < num; i++) {
        printf("%d \n", array[i]);
    }

    for(i = 0; i < num; i++) {
        for(j = i + 1; j < num; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0; i < num; i++) {
        printf("%d \n", array[i]);
    }


    return 0;
}


