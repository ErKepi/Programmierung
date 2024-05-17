#include <stdio.h>
#include <string.h>

void dreh(const char *s){

    char reversedS[50];
    int length;

    length = strlen(s);

    for (int i = 0; i <= length; i++)
    {
        int j = length - 1- i;
        reversedS[i] = s[j];
    }
    
    printf("'%s'\n", reversedS);

}

int main(){

    char s[50];

    printf("Geben Sie etwas ein: ");

    gets(s);

    dreh(s);

    return 0;
}