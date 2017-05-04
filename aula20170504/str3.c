#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256
int main()
{
    int i;
    char frase[NCHAR];
    char cifra[NCHAR];
    printf("Entre com uma frase\n");
    fgets(frase, NCHAR, stdin);
    frase[strlen(frase)-1]= '\0';
    for(i=0 ; i < NCHAR ; i++)
    {
        if(isalpha(frase[i]))
        {
            if((frase[i] >= 65 && frase[i] < 78)||(frase[i] >= 97 && frase[i] < 110))
               cifra[i] = frase[i] + 13;
            else
               cifra[i] = frase[i] - 13;
        }
    else
        cifra[i] = frase[i];
        }
    printf("Mesagem:\n %s", cifra);
    return 0;
    }


