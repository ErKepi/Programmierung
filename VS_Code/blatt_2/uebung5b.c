#include <stdio.h>

int main(){

    printf("Size of char: %i\n", sizeof(char));
    printf("Size of short: %i\n", sizeof (short));
    printf("Size of int: %i\n", sizeof (int));
    printf("Size of long: %i\n", sizeof (long));
    printf("Size of long long: %i\n", sizeof (long long));
    printf("Size of float: %i\n", sizeof (float));
    printf("Size of double: %i\n", sizeof(double));
    printf("Size of long double: %i\n", sizeof(long double));
    printf("Size of bool: %i\n", sizeof(_Bool));

    return 0;
}