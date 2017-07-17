#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main()
{
    int a,soma=0,i;
    printf("Digite um numero: ");
    scanf("%i",&a);
    safeFlush();
    for(i=1;i<a;i++)
        if(a%i==0)
        soma=i+soma;
        if(soma!=a || a==0)
            printf("O numero nao e' perfeito\n");
            else
            printf("O numero e' perfeito\n");
        return 0;
}
