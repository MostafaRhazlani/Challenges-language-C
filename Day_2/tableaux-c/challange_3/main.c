#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Enter Number of elements: ");
    scanf("%d", &num);

    int resualt;

    int array[num];

    for(int i = 1; i <= num; i++) {
        printf("Enter the %d number: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 1; i <= num; i++) {

        resualt = resualt + array[i];

         printf("%d + ", array[i]);
    }
    printf(" = %d \n", resualt);

    return 0;
}
