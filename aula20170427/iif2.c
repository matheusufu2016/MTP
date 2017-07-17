#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    float soma=0,A,i=0,N;
    printf("Digite um numero inteiro: ");
    scanf("%f",&N);
    for(i=0;i<729;i++)
    {
        soma=(1/N)+soma;
    }
    printf("O numero somado pelo seu inverso 729 vezes: %.15g\n",soma);
    printf("O numero somado pelo seu inverso 729 vezes: %.2f\n",soma);
    return 0;
}
