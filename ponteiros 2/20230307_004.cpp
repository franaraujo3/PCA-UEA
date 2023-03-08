#include <stdio.h>
int main(){
	int vector[8];
	int *p;
	
	printf("\nInsira 8 numeros inteiros:\n");
    for (p = vector; p < vector + 8; p++) {
        scanf("%d", p);
    }
	
	printf("\nDobro dos numeros inseridos: \n");
	for(p = vector; p < vector + 8; p++){
		printf("%d ", (*p)*2);
	}
	
	printf("\nEndereco dos numeros pares: \n");
	for(p = vector; p < vector + 8; p++){
		if(*p % 2 == 0){
			printf("\n%p ", p);
		}
	}
	
	return 0;
}
