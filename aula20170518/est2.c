#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000
#define FRAND(min,max) \
    (min + (max-min)*rand()/(float)RAND_MAX)
typedef
    struct Ponto {float x, y, z;}Ponto;

int main ()
{
    srand(time(NULL));
    Ponto pontos[N];
    int i, numpontos;
    float mediax=0.0, mediay=0.0, mediaz=0.0;
    for(i =0 ; i < N ; i++)
    {
        pontos[i].x= FRAND(-10.0,10.0);
        pontos[i].y= FRAND(-10.0,10.0);
        pontos[i].z= FRAND(-10.0,10.0);

    }
    printf("Escolha de 10 a 1000 pontos");
    scanf("%d", &numpontos);
    for(i=0; i< numpontos; i++)
    {
        mediax +=pontos[i].x;
        mediay +=pontos[i].y;
        mediaz +=pontos[i].z;
    }
    printf("Centro de massa (%f, %f, %f)\n", mediax/numpontos, mediay/numpontos, mediaz/numpontos);
    return 0 ;
}
