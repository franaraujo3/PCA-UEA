#include <stdio.h>
int main(){
	float ap1, ap2, ap3, ap4, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &ap1);
	printf("Insira a segunda nota: ");
	scanf("%f", &ap2);
	printf("Insira a terceira nota: ");
	scanf("%f", &ap3);
	printf("Insira a quarta nota: ");
	scanf("%f", &ap4);
	
	media = (ap1+ap2+ap3+ap4)/4;
	
	printf("a media das notas eh %.1f", media);
	
	return 0;
	
}
