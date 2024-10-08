#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#define MAX_CONTACTS 100
#define ID_WIDTH 6
#define NAME_WIDTH 20
#define NUMBER_WIDTH 20
#define EMAIL_WIDTH 30

void menu() {
    printf("\n\n ********** MENU ********** \n");
    printf("1. Add the contact \n");
    printf("2. Edit the contact \n");
    printf("3. Delete the contact \n");
    printf("4. Display all contacts \n");
    printf("5. Search the contact \n");
    printf("6. Exit");
}

struct contacts {
    int id;
    char name[100];
    char numberPhone[11];
    char email[100];
};

void print_line() {
    printf("+");
    for(int i = 0; i < ID_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < NAME_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < NUMBER_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < EMAIL_WIDTH; i++) printf("-");
    printf("+\n");

}

int main()
{
    struct contacts contact[MAX_CONTACTS];
    int i, length;
    int choose;
    int total = 0; // variable for total contact
    char nameContact[50],name[100] ,num[11] ,email[100];
    int uniqueId = 1;


    while(true) {
    menu(); // menu
    printf("\n\n");

    printf("Enter number between (1 and 5) : ");

    while(scanf("%d", &choose) != 1) {
        printf("\n This Number Not Exist In Menu \n");
        printf(" Choose another number: ");
        getchar();
    }

        switch(choose) {
            case 1:
                printf("\n----------Add New Contact----------\n");

                printf("Enter name : ");
                scanf("%s",name);

                int existing = 0;

                rtnNumber:
                printf("Enter number phone : ");
                scanf("%s",num);

                for (i = 0; i <= total; i++) {
                    if(strcmp(contact[i].numberPhone, num) == 0) {
                        printf("\n Number Phone already exist!\n");
                        existing = 1;
                        sleep(1);
                        goto rtnNumber;
                        break;
                    }
                }

                rtnEmail:
                printf("Enter email : ");
                scanf("%s",email);

                for (i = 0; i <= total; i++) {
                    if(strcmp(contact[i].email, email) == 0) {
                        printf("\nEmail already exist!\n");
                        existing = 1;
                        sleep(1);
                        goto rtnEmail;
                        break;
                    }
                }
                if (!existing) {
                    printf("\nContact add successfully\n");
                    printf("\n---------------------------------------------\n");
                    contact[total].id = uniqueId++;
                    strcpy(contact[total].name, name);
                    strcpy(contact[total].numberPhone, num);
                    strcpy(contact[total].email, email);
                    sleep(2);
                    total++;
                    break;
                }
                break;

            case 2:
                printf("\n----------Edit The Contact----------\n");

                printf("\nEnter name the contact: ");
                scanf("%s", nameContact);

                for(i = 0; i < total; i++) {
                    if(strcmp(contact[i].name, nameContact) == 0) {
                        printf("\n Old number: %s \n", contact[i].numberPhone);
                        printf("Enter a new number phone: ");
                        scanf("%s", contact[i].numberPhone);

                        printf("\n Old email: %s \n", contact[i].email);
                        printf("Enter a new email: ");
                        scanf("%s", contact[i].email);
                    }
                }
                break;

            case 3:
                printf("\n----------Delete The Contact----------\n");

                printf("\nEnter name the contact: ");
                scanf("%s", nameContact);

                for(i = 0; i < total; i++) {
                    if(strcmp(contact[i].name, nameContact) == 0) {
                        contact[i].id = contact[i+1].id;
                        strcpy(contact[i].name, contact[i+1].name);
                        strcpy(contact[i].numberPhone, contact[i+1].numberPhone);
                        strcpy(contact[i].email, contact[i+1].email);
                    }
                }
                total--;
                break;

            case 4:
                printf("\n----------Display All Contacts----------\n");
                printf("\nTotal contacts: %d \n", total);

                print_line();

                printf("| %-*s| %-*s| %-*s| %-*s|\n",
                ID_WIDTH - 1, "ID",
                NAME_WIDTH - 1, "Name",
                NUMBER_WIDTH - 1, "Number Phone",
                EMAIL_WIDTH - 1, "Email");

                print_line();

                for(i = 0; i < total; i++) {

                    printf("| %-*d| %-*s| %-*s| %-*s|\n",
                    ID_WIDTH - 1, contact[i].id,
                    NAME_WIDTH - 1, contact[i].name,
                    NUMBER_WIDTH - 1, contact[i].numberPhone,
                    EMAIL_WIDTH - 1, contact[i].email);
                }
                if(total == 0) {
                    printf("\t\t\tContacts is Empty\n");
                }

                print_line();
                break;

            case 5:
                printf("\n----------Search The Contact----------\n");

                printf("\nEnter name the contact: ");
                scanf("%s", nameContact);

                for(i = 0; i < total; i++) {
                    if(strcmp(contact[i].name, nameContact) == 0) {
                        printf("Name: %s \n", contact[i].name);
                        printf("Number phone:%s \n", contact[i].numberPhone);
                        printf("Email: %s \n", contact[i].email);
                    }
                }
                break;
            case 6:
                exit(1);
                break;
        }
    }
    return 0;
}
