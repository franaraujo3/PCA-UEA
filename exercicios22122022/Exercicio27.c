#include <stdio.h>
int main(){
	int n1, n2 = 1;
	int soma;
	
	for(n2; n2 <= 50; n2++){
		soma += n1/n2;
		n1 += 2;
	}
	printf("soma = %d", soma);
}
