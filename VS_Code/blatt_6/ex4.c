#include <stdio.h>

int main()
{

    long long fib[50]; //todo:versuche ohne []
    long long *p_fib;
    long long f_k, f_1 = 1, f_2 = 0;
    int n = 3;

    p_fib = fib;

    //while (*p_fib < 50)
    // while(n <= 50)
    // {
    //     f_k = f_1 + f_2;
    //     f_2 = f_1;
    //     f_1 = f_k;

    //     printf("f(%i) = %0.f\n", n, f_k);

    //     *(fib + n) = f_k;

    //    // *p_fib++;
    //     n++;
    // }
    
    for (int i = 1; i <= 50; i++)
    {
        f_k = f_1 + f_2; 
        f_2 = f_1; 
        f_1 = f_k;

        *p_fib = f_2;

        printf("f(%i) = %lli\n", i, *p_fib);
    }
    
    return 0;
}