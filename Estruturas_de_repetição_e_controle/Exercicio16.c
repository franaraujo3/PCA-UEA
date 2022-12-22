#include <stdio.h>
int main(){
	int num, soma;
	
	for(num=0; num<=5; num++){
		printf("Insira um numero: ");
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("%d", soma);
	
	return 0;
}
