#include <stdio.h>
#include <string.h>

// Mit strcat

int main(){

    char input1[50];
    char input2[50];

    printf("Erste Eingabe:");
    //scanf("%s", input1);
    gets(input1);

    printf("Zweite Eingabe:");
    //scanf("%s", input2);
    gets(input2);

    //Entfernen von '\n' im fgets
    //strcspn -> String Complement Scan
    //Sucht das Array nach dem
    //angegebenen String
    // input1[strcspn(input1, "\n")] = 0;
    // input2[strcspn(input2, "\n")] = 0;



    printf(" '%s'\n", strcat(input1, input2));

    return 0;
}