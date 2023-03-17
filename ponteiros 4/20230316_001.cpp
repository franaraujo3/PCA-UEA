#include <stdio.h>
#include <stdlib.h>
int *lerVetor(int n){
	int* vetor = (int*) malloc(n * sizeof(int));
	
	for(int i = 0; i < n; i++){
		printf("Insira o elemento %d do vetor: ", i+1);
		scanf("%d", vetor + i);
	}
	
	return vetor;
}
void maiorMenor(int *vet, int n, int *n_maior, int *n_menor){
	*n_maior = vet[0];
	*n_menor = vet[0];
	for(int i = 1; i < n; i++){
		if(*(vet+i) > *n_maior){
			*n_maior = *(vet+i);
		}
		if(*(vet+i) < *n_menor){
			*n_menor = *(vet+i);
		}
	}
}
int main(){
	int *v, n, maior, menor;
	printf("Insira a quantidade de elementos do vetor: ");
	scanf("%d", &n);
	v = lerVetor(n);
	maiorMenor(v, n, &maior, &menor);
	printf("\nMaior numero: %d", maior);
	printf("\nMenor numero: %d", menor);
	
	free(v);
	return 0;
}
