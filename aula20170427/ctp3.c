#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256
int main ()
{
    int i, x=0;
    char frase[NCHAR];
    printf("Digite uma frase: ");
    fgets(frase,NCHAR,stdin);
    for(i = 0; frase[i] != '\0'; i++ )
       // if(isalpha(frase[i]))
       if((frase[i] >= 0x41 && frase[i] <= 0x5A) ||
          (frase[i] >= 0x61 && frase[i] <= 0x7A))
            x++;
    printf("O numero de letras e: \n %d", x);
    return EXIT_SUCCESS;
}
