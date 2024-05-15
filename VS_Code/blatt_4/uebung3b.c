#include <stdio.h>


int main(){

    // Anzahl der Fibonacci-Zahlen
    //double bietet hoehere Genauigkeit als float
    double fk, f_1 = 1, f_2 = 1;
    double fkQuitoient; 
     

     for (int i = 3; i <= 20; i++)
     {
        fk = f_1 + f_2;
        f_2 = f_1;
        f_1 = fk;

        fkQuitoient = fk / f_2;

        // '\n&4.0f' -> keine Nachkommastellen, um Vier eingerueckt
        printf("f_%i =\t%4.0f %.15f\n", i, fk, fkQuitoient);
     }
     

    return 0;
}