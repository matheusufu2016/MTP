#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

float media(float vet[N]) {
    int i;
    float M=0;
    for(i=0;i<N;i++)
        M=M+vet[i];
        return (M/N);
}

float desv(float vet[N],float M) {
    int i;
    float desvio=0;
    for(i=0;i<N;i++)
        desvio=desvio+pow((vet[i]-M),2);
    desvio=sqrt(desvio/(N-1));
    return desvio;
}

int main() {
    float vet[N],med,despa;
    int i;
    for(i=0;i<N;i++) {
        printf("Digite um valor: ");
        scanf("%f",&vet[i]);
    }
    med=media(vet);
    printf("%g\n",med);
    despa=desv(vet,med);
    printf("%g\n",despa);
    return 0;
}
