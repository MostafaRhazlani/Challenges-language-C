#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, multiFactor, resualt;
    printf("Enter the number of element: ");
    scanf("%d", &num);

    int array[num];

    for(int i = 0; i < num; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter The multiplication factor: ");
    scanf("%d", &multiFactor);

    for(int i = 0; i < num; i++) {
        resualt = array[i] * multiFactor;

        printf("%d \n", resualt);
    }

    return 0;
}


