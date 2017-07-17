#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int x)
{
    int i,p;
    p=1;
    for(i=2; i < x ; i++)
    {

        if(x%i==0)
          p=0;
    }
    if(x==1) p=0;
    return p;

}

int soma(int x)
{
    int acc=0,i;
    for(i=2;i<x;i++)
    {
        if(primo(i)==1)
         {
            acc=acc+i;

         }
    }

    printf("\n a soma e %d",acc);
    if(acc==x)
            {
            printf(" \n a soma dos numeros anteriores ao numero e igual a ele mesmo");

            }



}

int main ()
{
    int x, y;
    printf("Digite um numero para saber se e primo:");
    scanf("%d", &x);
    y=primo(x);
    if(y==1)
    printf("e primo");
    else
    printf("nao e primo");
    soma(x);

    return 0;
}
