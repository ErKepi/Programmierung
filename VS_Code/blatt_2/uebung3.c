#include <stdio.h>

int main()
{
    int i;
    long ell;
    float f;
    double d;
    // d = 100 / 3; f = d; ell = f; i = ell;
    // d = 100 / 3.0; f = d; ell = f; i = ell;
    // d = (float) 100 / 3; f = d; ell = f; i = ell;
    d = 0.1; f = d; ell = f; i = ell;

    // Placeholder fuer double --> %lf
    printf("d ist %lf\n", d);

    // Placeholder fuer float --> %.xf (fuer x bevorzugte Nachkommaanzahl einsetzen)
    printf("f ist %.2f\n", f);

    // Placeholder fuer long --> %ld
    printf("ell ist %ld\n", ell);

    // Placeholder fuer int --> %i
    printf("i ist %i\n", i);

    return 0;
}