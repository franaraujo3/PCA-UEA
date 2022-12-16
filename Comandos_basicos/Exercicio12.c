#include <stdio.h>
int main(){
	int temp_c, temp_f;
	
	printf("Insira uma temperatura em graus Celsius: ");
	scanf("%d", &temp_c);
	
	temp_f = (1.8 * temp_c) + 32;
	
	printf("%d em Farenheit eh %d F", temp_c, temp_f);
	
	return 0;
	
}
