#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int operators, num;

    // variable numbers
    float number, firstNumber, secondNumber;

    float resault;

    printf(" 1. Addition \n 2. Soustraction \n 3. Multiplication \n 4. Division \n 5. Moyenne \n 6. Valeur absolue \n 7. Exponentiation \n 8. Racine carrée \n");

    printf("Choose number of operator: ");
    scanf("%d", &operators);

    switch(operators) {
        case 1:
            printf("Addition: \n");

            printf("How many number you will choose: ");
            scanf("%d", &num);
            for(int i = 1; i <= num; i++) {

                printf("Enter the %d number:", i);
                scanf("%f", &number);

                resault = resault + number;
            }
            break;
        case 2:
            printf("Soustraction: \n");

            printf("Enter the first number:");
            scanf("%f", &firstNumber);

            printf("Enter the second number:");
            scanf("%f", &secondNumber);

            resault = firstNumber - secondNumber;
            break;
        case 3:
            printf("Multiplication: \n");

            printf("How many number you will choose: ");
            scanf("%d", &num);

            resault = resault + 1;
            for(int i = 1; i <= num; i++) {
                printf("Enter the %d number:", i);
                scanf("%f", &number);

                resault *= number;
            }
            break;
        case 4:
            printf("Division: \n");

            printf("Enter the first number:");
            scanf("%f", &firstNumber);

            printf("Enter the second number:");
            scanf("%f", &secondNumber);

            if(firstNumber != 0 && secondNumber != 0) {
                resault = firstNumber / secondNumber;
            } else {
                printf("Not possible \n");
            }

            break;
    }
    printf("%f", resault);

    return 0;
}
