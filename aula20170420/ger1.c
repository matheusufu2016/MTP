#include <stdio.h>
int main()
{
    int i, numero;
    printf("Digite um numero para saber se primo: ");
    scanf("%d",&numero);
    for(i = 2; i < numero; i++) {
        if(numero%i == 0) {
            printf("esse nao e!\n");
            break;
        }
    }
    if(i == numero) printf("esse e primo!!!!\n");
    return 0;
}
