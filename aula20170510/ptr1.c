#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    unsigned int x = 0xFACA8421;
    unsigned char *p;
    printf("Variavel:%X\n",x);
    printf("Endereco: %p | Conteudo: %u\n" , &x, x);
    p=(unsigned char*)&x;
    for(i=0 ; i<sizeof(x) ; i++)
    {
        printf("Endereco: %p| Conteudo: %u ou %X\n" ,p+i, p[i], p[i]);
    }
    return EXIT_SUCCESS;
}
