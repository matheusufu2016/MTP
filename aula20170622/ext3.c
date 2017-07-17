#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
struct coord {
    float x,y;
}coord;

typedef
struct poli {
    int vert;
    coord *pontos;
}poli;

poli entrada() {
    int i;
    poli A;
    printf("Digite o numero de vertices: ");
    scanf("%d",&A.vert);
    A.pontos=(coord *) calloc(A.vert,sizeof(coord));
    for(i=0;i<A.vert;i++) {
        printf("Digite a coordenada 'x' do vertice %d: ",i+1);
        scanf("%f",&(A.pontos[i].x));
        printf("Digite a coordenada 'y' do vertice %d: ",i+1);
        scanf("%f",&(A.pontos[i].y));
    }
    return A;
}

void area(poli A) {
    float area=0;
    int i;
    for(i=0;i<A.vert-1;i++)
        area=area+(A.pontos[i].x*A.pontos[i+1].y)-(A.pontos[i+1].x*A.pontos[i].y);
    area=abs(area);
    printf("%g\n",0.5*area);
}

void centro(poli A) {
    int i;
    float Mx=0,My=0;
    for(i=0;i<A.vert;i++) {
        Mx=Mx+A.pontos[i].x;
        My=My+A.pontos[i].y;
    }
    printf("(%g,%g)\n",Mx/(float)A.vert,My/(float)A.vert);
}

int main() {
    poli *P;
    int N,i,j;
    printf("Quantos poligonos vc deseja dar entrada?\n");
    scanf("%d",&N);
    P=(poli*) calloc(N,sizeof(poli));
    for(i=0;i<N;i++) {
        printf("Digite as informacoes do poligono %d\n",i+1);
        P[i]=entrada();
    }
    for(i=0;i<N;i++) {
        printf("A area do poligono %d: ",i+1);
        area(P[i]);
        printf("O centroide do poligono %d: ",i+1);
        centro(P[i]);
    }
    for(i=0;i<N;i++)
        free((void*)P[i].vert);
    free(P);
    return 0;
}
