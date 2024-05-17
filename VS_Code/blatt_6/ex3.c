#include <stdio.h>
#include <string.h>

int main(){

    char input[50];
    char *p_input;
    int count = 0;

    p_input = input;

    printf("Eingabe: ");
    gets(input);
    
    for (int i = 0; *p_input != '\0'; i++)
    {
        count++;
        p_input++;
    }
    
    printf("Zeichenkette ist %i Zeichen lang.\n", count);

    return 0;
}