#include <stdio.h>
int main(){
	float m, cm;
	
	printf("Isira uma medida em metros: ");
	scanf("%f", &m);
	
	cm = m * 100;
	
	printf("%.2f m em centimetros eh %.0f cm", m, cm);
	
	return 0;
}
