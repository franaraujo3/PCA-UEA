#include <stdio.h>
int fatorial(int n){
	int fat;
	
	if(n <= 1){
		return(1);
	}else{
		return n * fatorial(n-1);
	}
}
int main(){
	int num;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	printf("fatorial de %d eh %d", num, fatorial(num));
	
}
