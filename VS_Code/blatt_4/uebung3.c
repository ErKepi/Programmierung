#include <stdio.h>


int main(){

    // Anzahl der Fibonacci-Zahlen
    float fk, f_1 = 1, f_2 = 1;
    float fkQuitoient; 
     

     for (int i = 3; i <= 20; i++)
     {
        fk = f_1 + f_2;
        f_2 = f_1;
        f_1 = fk;

        fkQuitoient = fk / f_2;

        printf("f_%i = %.0f %.15f\n", i, fk, fkQuitoient);
     }
    

    return 0;
}