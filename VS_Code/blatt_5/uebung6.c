#include <stdio.h>
#include <string.h>

int main(){
    char input[50];

// int length;

printf("Eingabe: ");
//scanf("%s", input);

// length = strlen(input);

fgets(input, 50, stdin); //stdin  -> default input


    //Entfernen von '\n' im fgets
    //strcspn -> String Complement Scan
    //Sucht das Array nach dem
    //angegebenen String
    input[strcspn(input, "\n")] = 0;

for (int i = 0; input[i] != '\0'; i++)
{
    if ((input[i] != 'a')&&(input[i] != 'e')&&(input[i] != 'i')&&(input[i] != 'o')&&(input[i] != 'u')&&(input[i] != 'A')&&(input[i] != 'E')&&(input[i] != 'I')&&(input[i] != 'O')&&(input[i] != 'U'))
    {
        printf("%c", input[i]);
    }
}

printf("\n");

return 0;
}