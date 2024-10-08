#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j, temp;
    printf("Enter the number of element: ");
    scanf("%d", &num);

    int array[num];

    int start = 0, end = num -1;

    for(i = 0; i < num; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    for(i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }

    while(start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }

    for(i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }


    return 0;
}


