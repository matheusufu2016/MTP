#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    long long int vet[1000];
    int i,n,maior,menor;
    srand(time(0));
    printf("Digite um numero inteiro positivo entre 1 e 1000: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        vet[i]=rand()%10;
    maior=vet[0];
    menor=maior;
    for(i=0;i<n;i++)
    {
        if(vet[i]>maior)
            maior=vet[i];
    }
            for(i=0;i<n;i++)
            {
            if(vet[i]<menor)
                menor=vet[i];
            }
    printf("\nO maior valor e o menor sao, respectivamente: %i, %i\n",maior,menor);
    return 0;
}
