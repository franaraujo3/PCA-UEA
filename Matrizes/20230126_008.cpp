#include <stdio.h>
#define MAX 50
void iprime(int m[MAX][MAX], int l, int c){
	for(int i = 1; i <= l; i++){
		for(int j = 1; j <= c; j++){
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}
int multiplica(int m1[MAX][MAX], int m2[MAX][MAX], int times[MAX][MAX], int a, int b, int a2, int b2){
	int aux = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b2; j++){
			for(int k = 1; k <= b; k++){
				aux += m1[i][k] * m2[k][j];
			}
			times[i][j] = aux;
			aux = 0;
		}
	}
	return times[i][j];
}
int main(){
	int m1[MAX][MAX], m2[MAX][MAX], times[MAX][MAX], a, b, a2, b2;
	printf("Insira a quantidade de linhas da matriz 1: ");
	scanf("%d", &a);
	printf("Insira a quantidade de colunas da matriz 1: ");
	scanf("%d", &a2);
	printf("Insira a quantidade de linhas da matriz 2: ");
	scanf("%d", &b);
	printf("Insira a quantidade de colunas da matriz 2: ");
	scanf("%d", &b2);
	
	if(a2 != b){
		printf("Linhas e colunas incompativeis");
	}else{
		printf("Matriz 1: \n");
		for(int i = 1; i <= a; i++){
			for(int j = 1; j <= a2; j++){
				printf("Matriz[%d][%d]: ", i, j);
				scanf("%d", &a[i][j]);
			}
		}
		imprime(a);
		
		printf("Matriz 2: \n");
		for(int i = 1; i <= b; i++){
			for(int j = 1; j <= b2; j++){
				printf("Matriz[%d][%d]: ", i, j);
				scanf("%d", &b[i][j]);
			}
		}
		imprime(b);
		if(multiplica(a, b, times, a, b, a2, b2)){
			printf("Matriz 3: \n");
			for(int i = 1; i <= a2; i++){
				for(int j = 1; j <= b; j++){
					printf("Matriz[%d][%d]: ", i, j);
					scanf("%d", &times[i][j]);
			}
		}
		imprime(times);
		}
	}
	
	return 0;
	
}
