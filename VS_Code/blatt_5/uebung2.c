#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    srand(time(0));

    int array[100];
    int count[51];

    // array bekommt 100 Zufallswerte im Bereich 0 bis 50
    for (int i = 0; i < 100; i++)
    {
        array[i] = rand() % 51; //Modulo 51 grenzt auf maximal 50 ein
    }

    for (int i = 0; i < 100; i++)
    {
        // int temp = array[i];
        // count[temp]++;

        count[array[i]]++;
    }
    

    //Ausgabe Array
    for (int i = 0; array[i] < 100; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("------------\n");
    
    //Ausgabe count (Occurrences)
    for (int i = 0; i < 51; i++)
    {
        printf("Anzahl von %d:\t%d\n", i, count[i]);
    }
    
    return 0;
}