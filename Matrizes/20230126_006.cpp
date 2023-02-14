#include <stdio.h>
void iprime(m[5][5]){
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m[5][5], l[5], c[5];
	int d;
	int d2=0, count;
	
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5, j++){
			printf("matriz[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
			if(i==j){
				d += m[i][j];
			}
			if(i+j==n+1){
				d2 += m[i][j];
			}
			c[j] += m[i][j];
			l[j] += m[i][j];
		}
	}
	imprime(m);
	printf("soma das linhas:\n")
	for(int i = 1; i <= 5; i++){
		printf("%d\n", l[i]);
	}
	printf("soma das colunas:\n")
	for(int i = 1; i <= 5; i++){
		printf("%d\n", c[i])
	}
	printf("Soma da diagonal principal:\n");
	printf("%d\n", d);
	
	printf("Soma da diagonal secundaria:\n");
	printf("%\n", d2);
	
	for (i = 1; i <= 5; i++){
		if(l[i] == l[i+1]){
			if(c[i]==c[i+1]){
				if (d == d2){
					count++;
				}
			}
		}
	}
	if (count > 0){
		printf("Eh um quadrado magico");
	}else{
		printf("Nao eh um quadrado magico");
	}


	return 0;
}
