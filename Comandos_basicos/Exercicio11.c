#include <stdio.h>
int main(){
	int temp_f, temp_c;
	
	printf("Insira a temperatura em Farenheit: ");
	scanf("%d", &temp_f);
	
	temp_c = (5* (temp_f - 32) / 9);
	
	printf("%d em Celsius eh %dC", temp_f, temp_c); 
	
	return 0;
}
