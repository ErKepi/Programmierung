#include <stdio.h>
#include <stdbool.h>

int main(){

    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    bool b;

    printf("Size of char: %zu\n", sizeof(c));
    printf("Size of short: %zu\n", sizeof (s));
    printf("Size of int: %zu\n", sizeof (i));
    printf("Size of long: %zu\n", sizeof (l));
    printf("Size of long long: %zu\n", sizeof (ll));
    printf("Size of float: %zu\n", sizeof (f));
    printf("Size of double: %zu\n", sizeof(d));
    printf("Size of long double: %zu\n", sizeof(ld));
    printf("Size of bool: %zu\n", sizeof(b));

    return 0;
}