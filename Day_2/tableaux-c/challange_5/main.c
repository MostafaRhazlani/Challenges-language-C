#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Enter the number of element: ");
    scanf("%d", &num);

    int array[num];

    for(i = 0; i < num; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    int a = array[0];

    for(i = 0; i < num; i++) {
        if(array[i] < a) {
            a = array[i];
        }
    }

    printf("%d", a);

    return 0;
}
