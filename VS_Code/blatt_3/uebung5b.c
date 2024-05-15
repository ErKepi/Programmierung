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
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n31 Tage.\n");
        break;

    case 2:
        if ((Jahr % 4 == 0 && Jahr % 100 != 0) |
            (Jahr % 400 == 0))
        {
            printf("\n29 Tage.\n"); /* code */
        }
        else
        {
            printf("\n28 Tage.\n"); /* code */
        }

        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n30 Tage.\n");
        break;
    default:
        printf("\nNicht im gueltigen Bereich.");
        break;
    }
}