#include <stdio.h>
int main(){
	int maior, menor, i, n;
	
	maior = menor;
	
	for(i = 0; i < 15; i++){
		printf("insira um numero: ");
		scanf("%d", &n);
		if (maior < n){
			maior = n;
		}
		if (menor > n){
			menor = n;
		}
	}
	printf("menor numero: %d\n", menor);
	printf("maior numero: %d", maior);
	
	return 0;
}
