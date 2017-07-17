#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float a,b,l;
    printf("Digite um numero e a base, respectivamente: ");
    scanf("%f%f",&a,&b);
    l=(log(a))/(log(b));
    printf("O log vale: %f\n",l);
    return 0;
}
