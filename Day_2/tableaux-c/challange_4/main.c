#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number of element: ");
    scanf("%d", &num);

    int array[num];

    for(int i = 1; i <= num; i++) {
        printf("Enter the %d number: ", i);
        scanf("%d", &array[i]);
    }

    int a = array[0];

    for(int i = 1; i <= num; i++) {
        if(array[i] > a) {
            a = array[i];
        }
    }

    printf("%d", a);

    return 0;
}
