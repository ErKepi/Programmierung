#include <string.h>
#include <stdio.h>

int main()
{
    int isbn[13] = {9,7,9,8,2,1,2,8,9,5,1,9,4};
    int summe1, summe2 = 0, summe3, summe4 = 0, ergebnis;

    for (int i = 1; i <= 11; i = i + 2)
    {
        summe1 = isbn[i];
        summe2 = summe2 + summe1;
    }

    for (int i = 0; i <= 12; i = i + 2)
    {
        summe3 = isbn[i];
        summe4 = summe4 + summe3;
    }

    summe2 = summe2 * 3;
    ergebnis = summe2 + summe4;

    if (ergebnis % 10 == 0)
    {
        printf("Die ISBN-13 ist korrekt.\n");
    }
    else {
        printf("Die ISBN-13 ist inkorrekt.\n");
    }
    

    return 0;
}