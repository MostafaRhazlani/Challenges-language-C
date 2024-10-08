#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, i;

    char title[30][50];
    char author[30][50];
    float prix[50];
    int quantity[50];
    int count = 0;
    int result = 0;

    while(1) {
        printf("\n\n");
        printf(" 1. Ajouter un livre au stock. \n 2. Afficher tous les livres disponibles. \n 3. Rechercher un livre par son titre. \n 4. Mettre à jour la quantité d'un livre \n 5. Supprimer un livre du stock. \n 6. Afficher le nombre total de livres en stock.");

        printf("\n \nEnter the number of element: ");
        scanf("%d", &num);

        switch (num) {
            case 1:
                printf("\n\nAdd a book. \n\n");

                printf("Enter title the book: ");
                scanf("%s", &title[count]);

                printf("Enter author the book: ");
                scanf("%s", &author[count]);

                printf("Enter prix the book: ");
                scanf("%f", &prix[count]);

                printf("Enter quantity the book: ");
                scanf("%d", &quantity[count]);
                count++;
                printf("The book is add \n\n");

                break;
            case 2:
                printf("\n\nDisplay books available. \n\n");

                if(count == 0) {
                    printf("No books in stock\n");
                } else {
                    for(i = 0; i < count; i++) {
                        printf("%d. title: %s | ",i+1, title[i]);
                        printf("Author: %s | ", author[i]);
                        printf("Prix: %.2f$ | ", prix[i]);
                        printf("Quantity: %d \n", quantity[i]);
                    }
                }
                break;
            case 3:
                printf("\n\n Search book by title \n\n");

                char searchByTitle[50];

                printf("Enter title of book: ");
                scanf("%s", &searchByTitle);

                for(i = 0; i < count; i++) {
                    if(strcmp(title[i], searchByTitle) == 0) {
                        printf("%s \n", title[i]);
                        printf("%s \n", author[i]);
                        printf("%.2f \n", prix[i]);
                        printf("%d \n", quantity[i]);

                    }
                }
                break;
            case 4:
                printf("\n\n Edit Quantity of book \n\n");

                char titleOfBook[50];

                if(count != 0 ) {

                    printf("Enter title of book: ");
                    scanf("%s", &titleOfBook);

                    for(i = 0; i < count; i++) {
                        if(strcmp(title[i], titleOfBook) == 0) {

                            printf("Edit quantity of book");
                            scanf("%d", &quantity[i]);

                            printf("%d", quantity[i]);
                        }
                    }
                } else {
                    printf("No books in stock\n");
                }



                break;
            case 5:
                printf("\nDelete the book from stock \n\n");


                if(count == 0) {
                    printf("No books in stock\n");
                } else {
                    for(i = 0; i < count; i++) {
                        printf("%d. title: %s | ",i+1, title[i]);
                        printf("Author: %s | ", author[i]);
                        printf("Prix: %.2f$ | ", prix[i]);
                        printf("Quantity: %d \n", quantity[i]);
                    }
                    char deleteElement[50];

                    printf("\nEnter titre of book: ");
                    scanf("%s", &deleteElement);

                    for(i = 0; i < count; i++) {
                        if(strcmp(title[i], deleteElement) == 0) {
                            strcpy(title[i], title[i + 1]);
                            strcpy(author[i], author[i + 1]);
                            prix[i] = prix[i + 1];
                            quantity[i] = quantity[i + 1];
                        }
                    }
                    count--;

                }


                break;
            case 6:
                printf("\n\n Number of books in stock\n\n");

                for(i = 0; i < count; i++) {
                    result = result + quantity[i];
                }
                printf("Count of books in stock is: %d \n", result);
                break;
            default:
                printf("Number not found choose another number\n");
        }

    }


    return 0;
}


