#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    // um sicherzustellen das, man nicht immer den gleichen Satz an Zahlen bekommt
    srand(time(0));

    int arr[20], sum_even = 0, sum_odd = 0, n, max, min;

    // Array mit zufälligen Zahlen füllen
    for (int i = 0; i <= 20; i++)
    {
        // rand() % (max_number + 1 - minimum_number) + minimum_number
        arr[i] = rand() % (10000 + 1 - 0) + 0; // % 10001 geht auch 
    }

    // Ausgabe
    for (int i = 0; i <= 20; i++)
    {
        printf("Zufallswert_%i: %i\n", i, arr[i]);
    }

    printf("------------\n");
    printf("gerade Zahlen:\n");

    for (int i = 0; i <= 20; i++)
    {
        // prüft auf gerade Zahlen
        if (arr[i] % 2 == 0)
        {
            printf("%i\n", arr[i]);

            sum_even += arr[i];
        }
    }

    printf("gerade Zahlen summiert: %i\n", sum_even);
    printf("------------\n");
    printf("ungerade Zahlen:\n");

    for (int i = 0; i <= 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
        }
        else
        {
            sum_odd += arr[i];
            printf("%i\n", arr[i]);
        }
    }
    printf("ungerade Zahlen summiert: %i\n", sum_odd);

    //Verbesserung: for-Schleifen verschachteln

    return 0;
}