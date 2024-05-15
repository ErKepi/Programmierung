#include <stdio.h>

int main()
{
    int mod, div, input;

    printf("Bitte eine Ganzzahl eingeben: \n");
    scanf("%i", &input);

    if (input > 0)
    {
        while (input > 0)
        {
            mod = input % 2;
            printf("%i", mod);
            input = input / 2; // hier wuerde auch '/=' funktionieren
        }
        printf("\n");
    }
    else if (input == 0)
    {
        printf("0\n"); // Bei 'input >= 0' landet man in einem Loop
    }
    else
    {
        printf("Fehler. Negative Zahlen unzulaessig.\n");
    }

    return 0;
}