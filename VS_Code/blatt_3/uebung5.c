#include <stdio.h>

int main()
{
    int Jahr, Monat;

    printf("\nWelches Jahr? ");
    scanf("%i", &Jahr);

    printf("\nWelcher Monat? ");
    scanf("%i", &Monat);

    switch (Monat)
    {
    case 1:
        printf("\nJanuar: 31 Tage.\n"); break;

    case 2:
        if ((Jahr % 4 == 0 && Jahr % 100 != 0) |
            (Jahr % 400 == 0))
        {
            printf("\nFebruar: 29 Tage.\n"); /* code */
        }
        else
        {
            printf("\nFebruar: 28 Tage.\n"); /* code */
        }

        break;

    case 3:
        printf("\nMaerz: 31 Tage.\n"); break;
    case 4:
        printf("\nApril: 30 Tage.\n"); break;
    case 5:
        printf("\nMai: 31 Tage.\n"); break;
    case 6:
        printf("\nJuni: 30 Tage.\n"); break;
    case 7:
        printf("\nJuli: 31 Tage.\n") ;break;
    case 8:
        printf("\nAugust: 31 Tage.\n"); break;
    case 9:
        printf("\nSeptemnber: 30 Tage.\n"); break;
    case 10:
        printf("\nOktober: 31 Tage.\n"); break;
    case 11:
        printf("\nNovember: 30 Tage.\n"); break;
    case 12:
        printf("\nDezember: 31 Tage.\n"); break;

    default:
        printf("\nNicht im gueltigen Bereich."); break;
    }
}