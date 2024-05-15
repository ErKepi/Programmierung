#include <stdio.h>
#include <math.h>

// Moeglichkeit 1 mit fabs:

int main()
{

    double a, x = 1, anWert = 2, an_temp, differenz;
    int i = 0;
    printf("Einen Wert fuer A eingeben: \n");
    scanf("%lf", &a);
    do
    {
        x = (anWert + (a / anWert)) / 2;
        an_temp = anWert;
        differenz = fabs(x - an_temp); // fabs() -> Betrag / Absolutbetrag
        printf("x_%i = %f\n", i, x);
        anWert = x;
        i++;
    } while (differenz > 0.000001);

    return 0;
}
/////////////////

// // Moeglichkeit 2 mit if-else
// int main()
// {
//     double a, x = 1, anWert = 2, an_temp;
//     int i = 0;
//     printf("Einen Wert fuer A eingeben: \n");
//     scanf("%lf", &a);
//     do
//     {
//         x = (anWert + (a / anWert)) / 2;
//         an_temp = anWert;
//         printf("x_%i = %f\n", i, x);
//         i++;
//         if (i > 1 && (x - an_temp) < 0.000001)
//         {
//             break;
//         }
//         anWert = x;
//     } while (1);

//     return 0;
// }