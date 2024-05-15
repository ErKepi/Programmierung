#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    printf("Bitte geben Sie etwas ein: \n");
    scanf("%[^\n]", text);
    //scanf("%s", text);
    
    // fgets(text, 100, stdin);

    // //Entfernen von '\n' im fgets
    // //strcspn -> String Complement Scan
    // //Sucht das Array nach dem
    // //angegebenen String
    // input[strcspn(text, "\n")] = 0;

    int length = 0;


    for (int i = 0;  text[i] != '\0' ; i++) {
        length++;
    }

    printf("Laenge der Zeichenkette: %d\n", length);

    return 0;
}