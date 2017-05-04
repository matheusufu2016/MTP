#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vet[10];
    int i, n=10;
    int soma=0;
    int produto=1;
    printf("Digite 10 numeros:");
    for(i=0; i < n ; i++)
        scanf("%d", &vet[i]);
    for(i=0; i < n ; i++)
        soma = vet[i] + soma;
    printf("A soma e: %d", soma);
    for(i=0; i < n ; i++)
        produto = vet[i]*produto;
    printf("O produto e: %d", produto);
  return 0;
}


