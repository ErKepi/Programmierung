#include <stdio.h>
#include <string.h>

// Ohne strcat

int main(){

    char input1[50];
    char input2[50];

    int length = 0;

    printf("Erste Eingabe: ");
    //scanf("%s", input1);
    gets(input1);

    printf("Zweite Eingabe: ");
    //scanf("%s", input2);
    gets(input2);

    //Entfernen von '\n' im fgets
    //strcspn -> String Complement Scan
    //Sucht das Array nach dem
    //angegebenen String
    // input1[strcspn(input1, "\n")] = 0; 
    // input2[strcspn(input2, "\n")] = 0;


    length = strlen(input1);
    //Alternativ mit for-Schleife:

    // for (int i = 0; input1[i] != '\0'; i++)
    // {
    //     length++;
    // }
    
    for (int i = 0; input2[i] != '\0'; i++)
    {
        input1[length] = input2[i];
        length++;
    }

    input1[length] = '\0';
    
    printf("'%s'\n", input1);


    //Testausgabe fuer length
    //printf("%i\n", length);

    return 0;
}