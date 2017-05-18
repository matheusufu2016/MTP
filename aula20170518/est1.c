#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SOMA(pa,pb,pr) \
    ({pr.x = pa.x + pb.x; \
       pr.y = pa.y + pb.y; \
      })
#define DISTANCIA(pa,pb) \
    (sqrt(pow(pa.x-pb.x,2)+ pow(pa.y-pb.y,2)))
#define IMPRIMIR(pa) \
    ({printf("(%f, %f)\n", pa.x, pa.y); \
    })
struct Ponto {
        float x;
        float y;
        };

int main(){
    struct Ponto pontoA, pontoB, pontoC;
    printf("Digite as coordenadas x e y de A");
    scanf("%f %f", &(pontoA.x), &(pontoA.y));
    printf("Digite as coordenadas x e y de B");
    scanf("%f %f", &(pontoB.x), &(pontoB.y));
    SOMA(pontoA, pontoB, pontoC);
    printf("A soma de A e B = ");
    IMPRIMIR(pontoC);
    printf("A distancia entre eles = %f\n", DISTANCIA(pontoA, pontoB));
    return 0;
}
