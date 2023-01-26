#include <stdio.h>
int aparecevezes(int n, int d){
	int count = 0;
	while(n > 0){
		if(n%10 == d){
			count++;
		}
		n /= 10;
	}
	return count;
}
int main(){
	int n, d, vezes;
	printf("Insira um valor para N: ");
	scanf("%d", &n);
	printf("Insira um valor para D: ");
	scanf("%d", &d);
	while(d > 9 || d < 0){
		printf("Insira um valor para d: ");
		scanf("%d", &d);
	}
	vezes = aparecevezes(n,d);
	printf("O numero %d aparece %d vezes em %d", d, vezes, n);
}
