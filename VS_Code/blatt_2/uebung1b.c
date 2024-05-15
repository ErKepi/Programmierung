#include <stdio.h>

int main()
{
    float f;

    // f = 17.0 / (5 / 3) * 4;

    // f = (17.0 / 5) * (5 / 17.0);

    // f = 1 * (1.0 / 3) * 3;

    f = 1.5e2 * 1.5e-2;

    printf("%.2f\n", f);

    return 0;
}