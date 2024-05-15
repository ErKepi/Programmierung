#include <stdio.h>
#include <string.h>

// Ohne strcat

int main(){

    char input1[50];
    char input2[50];

    printf("Erste Eingabe:");
    //scanf("%s", input1);
    fgets(input1, 50, stdin);

    printf("Zweite Eingabe:");
    //scanf("%s", input2);
    fgets(input2, 50, stdin);

    //Entfernen von '\n' im fgets
    //strcspn -> String Complement Scan
    //Sucht das Array nach dem
    //angegebenen String
    input1[strcspn(input1, "\n")] = 0; 
    input2[strcspn(input2, "\n")] = 0;

    printf(" '%s%s'\n", input1, input2);

    return 0;
}