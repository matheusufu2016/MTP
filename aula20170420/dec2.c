#include <stdio.h>
#include <time.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main ()
{
    int a,b,c;
    srand(time(0));
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%u",&a);
    safeFlush();
    if(a<0)
    a=a*-1;
    b=rand()%10;
    c = a+b;
    printf("O seu numero, o numero sorteado e a soma deles sao,respectivamente: %u %i %i",a,b,c);
    if(c%2==0)
        printf("\nA soma e' par\n");
    else
        printf("\nA soma e' impar\n");
    return 0;
}
