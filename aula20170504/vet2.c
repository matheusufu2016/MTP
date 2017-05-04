#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, n = 10;
	int vet [10];
	printf("Digite os Numeros: ");
	for ( i = 0; i < n; i++){
		scanf("%d", &vet [i] );
	}
	printf("Numeros Digitados: ");
	for ( i = 0; i < n; i++){
		printf(" %d ",vet [i] );
	}
	printf("\n");
	printf("Vetor invertido: ");
	for ( i = n - 1; i >= 0; i--)
		printf(" %d ", vet [i]);
	printf("\n");
	getche();
}
