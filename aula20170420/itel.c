#include <stdio.h>
int main() {
    int i;
    int numero, fatorial = 1;
    printf("Digite o numero para saber o fatorial: ");
    scanf("%d",&numero);
    for(i = 2; i <= numero; i++)
        fatorial = fatorial * i;
    printf("O fatorial de %d e %d\n",numero,fatorial);
    return 0;
}
