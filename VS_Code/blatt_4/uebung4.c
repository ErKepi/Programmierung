#include <stdio.h>

int main()
{

    double a, x, anWert = 1;

    printf("Einen Wert fuer A eingeben: \n");
    scanf("%lf", &a);

    for (int i = 0; i <= 10; i++)
    {
        x = (anWert + (a / anWert)) / 2;
        anWert = x;
        printf("x%i = %.6f\n", i, x);
    }

    return 0;
}