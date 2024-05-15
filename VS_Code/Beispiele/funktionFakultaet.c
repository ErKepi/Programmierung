#include <stdio.h>

long fakultaet(int n)
{
    if (n < 0)
    {
        return 0;
    }

    long result = 1;

    for (int i = 2; i < n; i++)
    {
        result *= i;
    }

    return result;
}

int main(){
    
    int n = 10;

    long fak = fakultaet(n);

    printf("Die Fakultaet von %i ist %i\n", n, fak);
}