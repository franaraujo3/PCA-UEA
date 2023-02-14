#include <stdio.h>
void iprime(int m[5][5]){
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m1[5][5], m2[5][5];
	int n, size, count;
	int s[size], s[size];
	
	printf("custos dos itinerarios:\n");
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	imprime(m1);
	printf("Insira uma cidade que deseja visitar: ");
	scanf("%d", &size);
	
	for(int i = 1; i <= size; i++){
		printf("Insira o itinerario: ");
		scanf("%d", &s[i]);
	}
	
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			if(j == s[i]){
				count += m1[s[i]][s[i+1]];
			}
		}
	}
	
	printf("Custo do itinerario: %d", count);
	
	return 0;
}
