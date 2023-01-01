#include <stdio.h>
int main(){
	int n, i = 1, soma = 0;
	printf("insira um numero: ");
	scanf("%d", &n);
	for (i; i <= (n/2); i++){
		if(n % i == 0){
			soma += i;
		}	
	}
	if (soma == n){
		printf("eh perfeito");
	}else{
		printf("nao eh perfeito");
	}
	return 0;
}
