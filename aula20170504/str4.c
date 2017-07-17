#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256
int main()
{
    int i;
    char frase[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    frase[strlen(frase)-1]='\0';
    for(i=0;i<strlen(frase);i++)
    {
        frase[i]=toupper(frase[i]);
    if(frase[i]=='A')
        frase[i]='4';
    if(frase[i]=='E')
        frase[i]='3';
    if(frase[i]=='I')
        frase[i]='1';
    if(frase[i]=='o')
        frase[i]='0';
    if(frase[i]=='S')
        frase[i]='5';
    if(frase[i]=='G')
        frase[i]='6';
    }
    printf("Mensagem: %s\n",frase);
    return 0;
}
