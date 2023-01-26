#include <stdio.h>
int vezes(int n, int d){
	int count = 0;
	
	while(n > 0){
		if(n%10 == d){
			count++;
		}
		n = n/10;
	}
	return count;
}
int main(){
	int a, b, d, aux;
	printf("Insira um valor A: ");
	scanf("%d", &a);
	printf("Insira um valor B: ");
	scanf("%d", &b);
	aux = a;
	d = aux % 10;
	aux = aux/ 10;
	int permuta = 0;
	
	while(aux > 0){
		if(vezes(a, d) != vezes(b, d)){
			permuta++;
		}
		aux = aux/ 10;	
	}
	if(permuta != 0){
		printf("Nao eh uma permutacao");
	}else if(permuta == 0){
		printf("Eh uma permutacao");
	}
}
