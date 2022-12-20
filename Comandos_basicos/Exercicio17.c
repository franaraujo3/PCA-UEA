#include <stdio.h>
int main(){
	int num, soma;
	
	for(num=0; num<=50; num++){
		printf("Insira um numero: ");
		scanf("%d", &num);
		if(num % 2 != 0){
			soma = soma + num;
		}	
	}
	printf("%d", soma);
	
	return 0;
}
