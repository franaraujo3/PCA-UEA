#include <stdio.h>

int main(){
	int num;
	int min, max;
	int i;
	
	for (i = 0; i < 3; i++){
		printf("Digite um n?mero: \n");
		scanf("%d", &num);
		if (i <= 0){
			min = num;
		}
		if (num > max){	
			max = num;
		}
		if (num < min){
			min = num;
		}
		if (num < 0){
			printf("O valor deve ser positivo!");
			
		}
	}
	printf("menor n?mero: %d \n", min);
	printf("maior n?mero: %d \n", max);
	
	return 0;
}
