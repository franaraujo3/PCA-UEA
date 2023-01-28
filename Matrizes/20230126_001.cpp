#include <stdio.h>
int main(){
	int i, j, matriz1[3][5], matriz2[3][5], matriz_soma[3][5];
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("\nmatriz 1[%d][%d]: ",i+1,j+1);
      		scanf("%d", &matriz1[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("\nmatriz 2[%d][%d]: ",i+1,j+1);
      		scanf("%d", &matriz2[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
			printf("%d ", matriz_soma[i][j]);
		}
		printf("\n");
	}
	return 0;
}
