#include <stdio.h>

int main()
{

    int n;

    // n = ((((((17 - 2) * 7) - 9) * 7) + 9) % 6);

    // n = 17 - (2 * (7 + (9 %6)));

    // n = 17 / (5 / 3) * 4;
    //  -> als Fließkomma: 204/5; da Ganzzahl jedoch: 68

    n = (17 / 5) * (5 / 17);

    printf("%i\n", n);
    return 0;
}
