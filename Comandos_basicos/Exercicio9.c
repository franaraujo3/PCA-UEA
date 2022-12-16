#include <stdio.h>
int main(){
	int lado, area, dobro_area;
	
	printf("Insira o valor do lado do quadrado: ");
	scanf("%d", &lado);
	
	area = lado * lado;
	
	dobro_area = area * 2;
	
	printf("A area do quadrado eh %d e o seu dobro eh %d.", area, dobro_area);
	
	return 0; 
}
