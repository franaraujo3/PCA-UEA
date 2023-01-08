#include <stdio.h>
int ehPerfeito(n){
	int i = 1, soma = 0;
	for (i; i <= (n/2); i++){
		if(n % i == 0){
			soma += i;
		}	
	}
	if (soma == n){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int a;
	printf("Insira um valor: ");
	scanf("%d", &a);
	
	while(a % 2 != 0){
		printf("Valor imapar!\n");
		printf("Insira um valor: ");
		scanf("%d", &a);
	}
	if(ehPerfeito(a)){
		printf("eh perfeito");
	}else{
		printf("nao eh perfeito");
	}
}

