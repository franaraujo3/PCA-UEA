#include <stdio.h>
int main(){
	float altura, peso_ideal;
	
	printf("Insira a sua altura em metros: ");
	scanf("%f", &altura);
	
	peso_ideal = (72.7*altura) - 58;
	
	printf("O seu peso ideal eh: %.1fkg", peso_ideal);
	
	return 0;
}
