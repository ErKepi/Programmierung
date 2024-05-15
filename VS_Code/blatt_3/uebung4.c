#include <stdio.h>
#include <math.h>

int main()
{
    float p, q, x1, x2, y1,y2, wurzel;

    printf("\nGeben Sie den p-Wert an: ");
    scanf("%f", &p);

    printf("\nGeben Sie den q-wert an: ");
    scanf("%f", &q);

    wurzel = sqrt(((p * p) / 4) - (q));

    if (wurzel >= 0)
    {
        x1 = (-p / 2) + wurzel;
        x2 = (-p / 2) - wurzel;

        printf("x1 = %.2f, x2 = %.2f\n", x1, x2);

        y1 = (x1 * x1) + p * x1 + q;
        y2 = (x2 * x2) + p * x2 + q;

        printf("y1 = %.2f, y2 = %.2f\n", y1, y2);
        
    }
    else {
        printf("Da die Diskrimante kleiner Null ist, ist die Gleichung unloesbar.\n");
    }

    return 0;
}