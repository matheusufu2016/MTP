#include <stdio.h>
#include <math.h>
int main()
{
    float Zr,Zi,X;
    printf("Digite a parte real do primeiro numero e a complexa, respectivamente: ");
    scanf("%f%f",&Zr,&Zi);
    X=pow(Zr,2) + pow(Zi,2);
    printf("O resultado da multiplicaçao dos complexos e' %f+\n",X);
    return 0;
}
