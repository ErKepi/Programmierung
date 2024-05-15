#include <stdio.h>
#include <string.h>

int main()
{
    char input1[100];
    char input2[100];

    printf("Erste Eingabe: ");
    scanf("%s", input1);

    printf("Zeite Eingabe: ");
    scanf("%s", input2);

    int result = 0;

    for (int i = 0; input1[i] != '\0'; i++)
    {
        if (input1[i] == input2[i])
        {
            result += 0;
        }
        else
        {
            result += 1;
        }
    }

    if (result == 0)
    {
        printf("Zeichenkette gleicht sich.\n");
    }
    else {
        printf("Zeichenkette gleicht sich nicht\n");
    }

    // result = strcmp(input1, input2);

    // printf("%d", result);

    // if (result == 0)
    // {
    //     printf("Die Zeichenketten gleichen sich.");
    // }
    // else {
    //     printf("Die Zeichenketten gleichen sich nicht.");
    // }

    // if (input1[0] == input2[0])
    // {
    //     for (int i = 1; (input1[i] != '\0'); i++)
    //     {
    //         if (input1[i] == input2[i])
    //         {

    //         }

    //     }

    // }

    // for (int i = 0; (input1[i] != '\0') && (input2[i] != '\0'); i++)
    // {
    //     if (input1[i] == input2[i])
    //     {
    //         /* code */
    //     }

    // }

    /*  if (input1 == input2)
     {
         printf("Die Eingaben gleichen sich.\n");
     }
      */

    return 0;
}