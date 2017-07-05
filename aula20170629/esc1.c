#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    int len = 0;
    char * texto = NULL;
    FILE * arquivo = NULL;
    arquivo = fopen("meutexto.txt","a");
    fprintf(stdout,"Digite seu texto; '\\'+ENTER para encerrar: \n");
    do {
        c = getchar();
        len++;
        texto = (char *) realloc(texto, len*sizeof(char));
        texto[len-1] = toupper(c);
    } while(c != '\\');
    texto[len-1] ='\0';
    fprintf(stdout,"****************************************\n\n");
    fprintf(arquivo,"%s\n",texto);
    fclose(arquivo);
    free(texto);
    return 0;
}
