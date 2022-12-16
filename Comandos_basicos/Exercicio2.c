#include <stdio.h>
int main(){
	char nome[30];
	int idade;
	char sexo;
	printf("\nInsira seu sexo F ou M:  ");
	scanf("%c", &sexo);
	
	printf("\nqual o seu nome? ");
	scanf("%s", &nome);
	
	printf("\nQual a sua idade? ");
	scanf("%i", &idade);
	
	
	
	if(sexo == 'F'){
		printf("\nnome: %s", nome);
		printf("\nidade: %i", idade);
		printf("\nsexo: %c, eh mulher", sexo);
	}else{
		printf("\nnome: %s", nome);
		printf("\nidade: %i", idade);
		printf("\nsexo: %c, nao eh mulher", sexo);
	}
	return 0;
}
