#include <stdio.h>
int main(){
	int x, y, soma;
	
	printf("Insira um numero x:\n");
	scanf("%d", &x);
	printf("Insira um numero y:\n");
	scanf("%d", &y);
	soma = x + y;
	printf("\nO resultado da soma de %d e %d eh %d.", x, y, soma);
	
	return 0;
}
