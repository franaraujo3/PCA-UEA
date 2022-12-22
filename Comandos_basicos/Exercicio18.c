#include <stdio.h>
int main(){
	int i, num, sum=0;
	
	for(i=0; i < 50 ;i++){
		printf("Insira um numero: ");
		scanf("%d", &num);
		if(num % 2 != 0){	
			if(num > 100 && num < 200){
				sum += num;
			}
		}
	}
	printf("%d", sum);
	
	return 0;
}
