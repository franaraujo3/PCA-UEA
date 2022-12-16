#include <stdio.h>
int main(){
	int base, altura, area;
	
	printf("Informe o valor da base do triangulo: ");
	scanf("%i", &base);
	printf("\nInforme o valor da altura do triangulo: ");
	scanf("%i", &altura);
	
	area = (base * altura)/2;
	
	printf("\nA area do triangulo e %i", area);
	
	return 0;
	
}
