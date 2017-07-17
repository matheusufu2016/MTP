#include <stdio.h>
int main()
{
    unsigned long long int a,b=0,fat=1;
    printf("Digite um numero: ");
    scanf("%llu",&a);
    while(b!=a)
    {
        fat=b*fat+fat;
        b++;
    }
    printf("O fatorial e': %llu\n",fat);
    return 0;
}
