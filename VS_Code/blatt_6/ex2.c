#include <stdio.h>

// Kann in der Pruefung drankommen

int main(){

    int m = 9;
    int n = 10;
    int *pm;
    int *pn;
    int temp;

    pm = &m;
    pn = &n;

    temp = *pm;
    *pm = *pn;
    *pn = temp;

    
    printf("m = %i\nn = %i.\n", m, n);

    return 0;
}