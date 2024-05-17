#include <stdio.h>

int berechne(int v1, char op, int v2){

    int result;
    
    //TODO: Switch Case benutzen


    switch (op)
    {
    case '+':
        result = v1 + v2;
        break;
    case '-':
        result = v1 - v2;
        break;
    case 'x':
        result = v1 * v2;
        break;
    case '/':
        result = v1 / v2;
        break;
    default:
        printf("Keine zulaessigen Operatoren benutzt.\n");
        break;
    }

    return result;
}

int main(){
    int v1, v2;
    char op;

    printf("Geben Sie die Variable ein: ");
    scanf("%i", &v1);

    printf("Geben Sie einen Rechenoperator an: ");
    scanf(" %c", &op);

    printf("Geben Sie die zweite Variable ein: ");
    scanf("%i", &v2);   
    
    
    printf("%i\n", berechne(v1, op, v2));
    return 0;
}