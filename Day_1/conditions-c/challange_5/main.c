#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable years
    int years;

    // enter year
    printf("Enter A year: ");
    scanf("%d", &years);

    // calculate
    int mois = (365 / 30) * years;
    int jours = 365 * years;
    int hours = 365 * 24 * years;
    int minutes = 365 * 24 * 60 * years;
    int seconds = 365 * 24 * 60 * 60 * years;

    // print
    printf("%d mois \n", mois);
    printf("%d jour \n", jours);
    printf("%d hour \n", hours);
    printf("%d menute \n", minutes);
    printf("%d second \n", seconds);

    return 0;
}
