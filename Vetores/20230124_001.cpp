#include <stdio.h>
int main(){
	int n, vet[n], i;
	do{
		printf("Informe o tamanho da sequencia: ");
		scanf("%d", &n);
		if(n > 100 || n < 0){
			printf("\ntamanho invalido!Insira novamente: ");
		}	
	}while(n > 100 || n < 0);
	
	for(i=0; i<n; i++){
		do{
			printf("Insira um numero: ");
			scanf("%d", &vet[i]);
			
			if(vet[i] > 100){
				printf("\nNumero invalido! Insira um numero menor que 100: ");
			}
		}while(vet[i] > 100);
	}
	printf("\Os elementos do vetor ordenados inversamente:\n");
	for(i = n -1; i >=0; i--){
		printf("%d", vet[i]);
	}
	return 0;
}
