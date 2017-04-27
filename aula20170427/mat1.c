#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
     {
         float P1x, P1y, P2x, P2y;
         float distancia;
         printf("Entre com a coord x de P1:");
         scanf("%f", &P1x);
         printf("Entre com a coord y de P1:");
         scanf("%f", &P1y);
         printf("Entre com a coord x de P2:");
         scanf("%f", &P2x);
         printf("Entre com a coord y de P2:");
         scanf("%f", &P2y);
         distancia = sqrt(pow(P2x-P1x,2)+ pow(P2y-P1y,2));
         printf("A distancia e: %g\n", distancia);
         return EXIT_SUCCESS;

     }
