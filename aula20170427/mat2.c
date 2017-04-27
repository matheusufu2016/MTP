#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
     {
         float a, b, r, x;
         float distancia;
         printf("Entre com um lado do triangulo:");
         scanf("%f", &a);
         printf("Entre com o segundo lado do triangulo:");
         scanf("%f", &b);
         printf("Entre com ao angulo formado entre eles em radianos:");
         scanf("%f", &r);
         x=cos(r);
         distancia = sqrt(pow(a,2) + pow (b,2 )- 2*a*b*x);
         printf("A distancia e: %g\n", distancia);
         return EXIT_SUCCESS;

     }
