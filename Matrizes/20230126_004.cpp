#include <stdio.h>
int main(){
	int matriz[3][3] = {{4,97,89}, {55,46,80}, {75,20,8}}, aux=0, i, j, n;
	printf("Isira um numero: ");
	scanf("%d", &n);
	
	
	printf("\nMatriz: \n");
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (n == matriz[i][j]){
				printf("\nEncontrado em[%d][%d]", i,j);
			}
		}
		
	}
	if(aux == 0){
		printf("\nNao encontrado!");
	}
	
	return 0;
}



