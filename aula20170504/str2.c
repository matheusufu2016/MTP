#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define N 256
int main()
{
    int i,j=0;
    char frase[N],mensagem[100],aux[100];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    for(i=0;frase[i]!='\0';i++)
    {
        if(frase[i]==' ' && frase[i+1]!=' ')
        {
            mensagem[j]=frase[i+1];
            j++;
        }
    }
    mensagem[j]='\0';
    if(frase[0]==' ')
    {
    for(i=0;mensagem[i]!='\0';i++)
        mensagem[i]=toupper(mensagem[i]);
    printf("%s",mensagem);
    }
    if(frase[0]!=' ')
    {
        aux[0]=frase[0];
        for(i=0;aux[i]!='\0';i++)
        {
            aux[i+1]=mensagem[i];
            aux[i]=toupper(aux[i]);
        }
    printf("%s",aux);
    }
    return 0;
}
