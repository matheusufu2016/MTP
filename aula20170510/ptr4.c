#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int x, y, s;
    unsigned char  *p, *q, *r;
    p=&x;
    q=&y;
    printf("Digite um numero para x:");
    scanf("%d", &x);
    printf("Digite um numero para y:");
    scanf("%d", &y);
    s= x+y;
    r=&s;
    printf("A soma e: %d ", s);
    printf("O endereco na memoria de x: %i e o seu conteudo : %d", p, *p);
    printf("O endereco na memoria de y: %i e o seu conteudo : %d", q, *q);
    printf("O endereco na memoria da soma: %i e o seu conteudo : %d", r, *r);
    return 0;

}
