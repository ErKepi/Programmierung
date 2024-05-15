#include <stdio.h>

int main()
{
    // div = division
    int dez, modulo, div;
    int liste[7];

    printf("Bitte eine Zahle eingeben: \n");
    scanf("%i", &dez);

    if (dez >= 0 && dez <= 255)
    {
        int i = 0;

        modulo = dez % 2;
        div = dez / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        i++;

        modulo = div % 2;
        div = div / 2;
        liste[i] = modulo;
        // i++;
    }
    else
    {
        printf("Bitte eine Zahl von 0 bis einschliesslich 255 angeben.\n");
    }

    printf("%i%i%i%i%i%i%i%i\n", liste[7], liste[6], liste[5], liste[4], liste[3], liste[2], liste[1], liste[0]);

    return 0;
}