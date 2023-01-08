#include <stdio.h>
int parto(int p, int s){
	int m;
	m = s/4;
	if (p < 100 || s < 28){
		printf("Parto nao deve ser realizado, reavaliar clinicamente \n");
	}
	else if (p > 2500 && m > 7 ){
		printf("Parto Normal");
	}
	else if (p > 2500 && m < 7 ){
		printf("Cesariana");
	}
	else if (p > 1500 && p < 2000 && m == 9){
		printf("Parto Normal");
	}else{
		printf("Cesariana");
	}
}

int main(){
	int peso, semanas;
	printf("Digite o peso do feto em gramas: ");
	scanf("%d", &peso);
	printf("Digite as semanas de gestacao do feto: ");
	scanf("%d", &semanas);
	parto(peso, semanas);
}

