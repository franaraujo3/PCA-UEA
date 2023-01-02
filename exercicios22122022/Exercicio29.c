#include <stdio.h>
int main(){
	int temp_t, temp_hr, temp_min, temp_seg;
	float massa_i, massa_f;
	
	printf("Insira a masa inicial em gramas: ");
	scanf("%f", &massa_i);
	
	massa_f = massa_i;
	temp_t = 0;
	
	while(massa_f >= 0.5){
		massa_f = massa_f / 2;
		temp_t = temp_t + 50;
	}
	temp_hr = (temp_t / 3600);
        temp_min = (temp_t % 3600) / 60;
  	temp_seg = (temp_t % 3600) % 60;
  	
	printf("massa inicial = %.2f gramas\n", massa_i);
	printf("massa final = %.2f gramas\n", massa_f);
	
	printf("tempo total: %d segundos\n", temp_t);
	printf("%d horas, %d minutos, %d segundos", temp_hr, temp_min, temp_seg);
	
	
}
