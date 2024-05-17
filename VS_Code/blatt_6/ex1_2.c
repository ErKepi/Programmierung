#include <stdio.h>
#include <string.h>

// Ohne strcat

int main(){

    char input1[50];
    char input2[50];

    printf("Erste Eingabe:");
    //scanf("%s", input1);
    gets(input1);

    printf("Zweite Eingabe:");
    //scanf("%s", input2);
    gets(input2);

    printf(" '%s%s'\n", input1, input2);

    return 0;
}