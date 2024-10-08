#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter how many element you need: ");
    scanf("%d", &num);

    int array[num];

    for(int i = 1; i <= num; i++) {
        printf("Enter the %d number: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 1; i <= num; i++) {
        printf("%d \n", array[i]);
    }




    return 0;
}
