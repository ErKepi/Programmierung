#include <stdio.h>
#include <string.h>

int main()
{
    char input[50];
    char reversedInput[50];
    int length, i;

    printf("Geben Sie etwas ein: ");

    //scanf funktioniert nicht mit leerem Input
    //scanf("\t%s\n", input);
    //printf("%s\n", input);
    fgets(input, 50, stdin);

    //Entfernen von '\n' im fgets
    //strcspn -> String Complement Scan
    //Sucht das Array nach dem
    //angegebenen String
    input[strcspn(input, "\n")] = 0;
    
    length = strlen(input);

    // for (int i = 0; input != '\0' ; i++)
    // {
    //     /* code */
    // }
    
    // printf("%d\n", length);

    for (int i = 0; i <= length; i++)
    {
        int j = length - 1- i;
        reversedInput[i] = input[j];
    }
    
    printf("Ausgabe: '%s'\n", reversedInput);

    return 0;
}