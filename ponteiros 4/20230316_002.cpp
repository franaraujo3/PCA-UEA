#include <stdio.h>
#include <stdlib.h>
int main(){
	int **matriz = (int**) malloc(2 * sizeof(int));
	for(int i = 0; i < 2; i++){
		*(matriz + i) = (int*) malloc(3 * sizeof(int));
	}
	
	matriz[0][0] = 1; matriz[0][1] = 2; matriz[0][2] = 3; matriz[1][0] = 4;
	matriz[1][1] = 5; matriz[1][2] = 6;
	
	printf("\nMatriz impressa usando aritmetica de ponteiros:\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", *((*(matriz + i)) + j));
		}
		printf("\n");
	}
	
	printf("\nMatriz impressa usando indexes:\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 2; i++){
		free(*(matriz + i));
	}
	
	free(matriz);
	return 0;
}
