#include <stdio.h>

int main(int argc, char **argv)
{

    unsigned int jahr = 2024;
    
    /*Ein Schaltjahr ist durch 4, aber nicht 100 teilbar
    ODER es ist glatt durch 400 teilbar*/

    if ((jahr % 4 == 0 && jahr % 100 != 0)
        || (jahr % 400 == 0))
        {
            printf("Das Jahr %u ist ein Schaltjahr!\n", jahr);
        }
    else
    {
        printf("Das Jahr %u ist _kein_ Schaltjahr\n", jahr);
    }
    return 0;
}