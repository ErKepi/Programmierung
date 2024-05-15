#include <stdio.h>

int main()
{

    char input;
    int count = 0;

    printf("Geben Sie etwas ein: ");
  
    do {
        input = getchar();
        count++;
    }
    while (input != '\n');
    

    printf("Zeichenkette ist %i Zeichen lang.\n", count-1);

    return 0;
}

    // while (input = getchar() != '\n' && input != EOF)
    // {
    //     count++;
    // }