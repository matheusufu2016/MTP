#include <stdio.h>
#include <stdlib.h>

void preenche(float * elemento);
void imprime(float **matriz, int N, int M);
void transp(float **matriz, int N, int M);

int main() {
  int i, j;
  int N, M;
  float **matriz;
  printf("Entre com a ordem da matriz, no formato 'NxM': ");
  scanf("%dx%d", &N, &M);
  matriz = calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) {
	matriz[i] = calloc(M,sizeof(float));
    for(j = 0; j < M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  imprime(matriz, N, M);
  transp(matriz,N,M);
  for(i = 0; i < N; i++)
	free(matriz[i]);
  free(matriz);
  return 0;
}

void preenche(float * elemento) {
  scanf("%f", elemento);
}

void transp(float **matriz, int N, int M) {
  int i, j;
  printf("\nMatriz transposta %dx%d:\n", M, N);
  for(j = 0; j < M; j++)
    for(i = 0; i < N; i++)
      printf("%g%c", matriz[i][j], (i == N-1)? '\n':'\t');
}

void imprime(float **matriz, int N, int M) {
  int i, j;
  printf("\nMatriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%g%c", matriz[i][j], (j == M-1)? '\n':'\t');
}
