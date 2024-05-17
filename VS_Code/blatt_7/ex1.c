#include <stdio.h>
#include <math.h>

void zp(int a, int b)
{

    int n = 0, result, array[b];

    if (a < 0 || b <= 0 || b < a)
    {
        printf("Fehlerhafte Eingaben!\n");
    }
    else
    {
        for (int i = 0; i <= b; i++)
        {
            array[i] = pow(2, n);
            n++;
        }

        for (int i = 0; array[i] < b; i++)
        {
            printf("%i ", array[i]);
        }
    }
}

int main()
{
    int a, b;

    printf("Geben Sie den ersten Wert an: ");
    scanf("%i", &a);

    printf("Geben Sie den zweiten Wert an: ");
    scanf("%i", &b);

    // printf("%i\n", pow(a, b));

    zp(a, b);

    return 0;
}