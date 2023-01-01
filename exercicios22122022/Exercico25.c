#include <stdio.h>
int main(){
	int n, soma_par, soma_impar, i;
	for (i= 0; i < 100; i++){
		printf("insira um numero: ");
		scanf("%d", &n);
		if (n % 2 == 0){
			soma_par += n;
		}if (n % 2 != 0){
			soma_impar += n;
		}if (n > 1000){
			break;
		}
	}
	printf("soma dos numeros pares: %d\n", soma_par);
	printf("soma dos numeros impares: %d\n", soma_impar);
	return 0;
}
