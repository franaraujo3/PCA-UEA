#include <stdio.h>
#include <math.h>
int main(){
	float raio, potencia_raio, area;
	
	printf("Insira o raio do circulo: ");
	scanf("%f", &raio);
	
	potencia_raio = pow(raio,2);
	
	area = 3.14 * (potencia_raio);
	
	printf("A area do circulo de raio %.1f eh %.1f", raio, area);
	
	return 0;
}
