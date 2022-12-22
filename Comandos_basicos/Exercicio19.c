#include <stdio.h>

int main(){
	int num;
	int min, max;
	int i;
	
	for (i = 0; i < 20; i++){
		printf("Digite um numero: \n");
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
	}
	printf("menor numero: %d \n", min);
	printf("maior numero: %d \n", max);
	
	return 0;
}
