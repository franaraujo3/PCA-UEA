#include <stdio.h>
void imprimematriz(int matriz[5][5]){
	int i, j;
	printf("\nMatriz:\n");
	for(i=0; i < 5; i++){
		for(j=0; j < 5; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
void diagonalprincipal(int matriz[5][5]){
	int i;
	printf("\nDiagonal Principal:\n");
	for(i = 0; i < 5; i++){
		printf("%d ", matriz[i][i]);
	}
	printf("\n");
}
void diagonalsecundaria(int matriz[5][5]){
	int i;
	printf("\nDiagonal Secundaria:\n");
	for(i=0; i < 5; i++){
		printf("%d ", matriz[i][5 - 1 - i]);
	}
	printf("\n");
}
void somalinha4(int matriz[5][5]){
	printf("\nSoma da quarta linha:\n");
	int soma=0, i;
 	for(int i = 0; i < 5; i++){
        soma += matriz[3][i];
    }
	printf("\n%d", soma);
}
void somacoluna2(int matriz[5][5]){
	printf("\nSoma da coluna secundaria:\n");
	int soma=0, i;
 	for(int i = 0; i < 5; i++){
        soma += matriz[i][1];
    }
	printf("\n%d", soma);
}
void tdmenosprincipal(int matriz[5][5]){
	int i, j;
    printf("\nTudo menos a diagonal principal:\n ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (i != j)
                printf("%d ", matriz[i][j]);
            else
                printf("x ");
        }
        printf("\n");
    }
}
int main(){
	int matriz[5][5], i, j;
	
	for(i=0; i < 5; i++){
		for(j=0; j < 5; j++){
			printf("\nInsira do elemento [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	imprimematriz(matriz);
	diagonalprincipal(matriz);
	diagonalsecundaria(matriz);
	somalinha4(matriz);
	somacoluna2(matriz);
	tdmenosprincipal(matriz);
}
