#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void pares(int numero)
{
int i;
printf("\nos numeros pares dessa sequencia sao:");
for(i=2; i<=numero ;i=i+2)
{
   printf("%d ", i);
}

   return i;
}

void impares(int numero)
{
int y;
printf("\nos numeros impares dessa sequencia sao:");
for(y=1;y<=numero;y=y+2)
{

   printf("%d ",y);
}

   return y;
}


int main ()
{
    int numero;
    printf("Digite um numero para saber os pares ou impares de 1 a ele:");
    scanf("%d", &numero);
    pares(numero);
    impares(numero);

    return 0 ;
}
