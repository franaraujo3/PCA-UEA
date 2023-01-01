#include <stdio.h>
int main(){
	int m, n, x, y, valor, x_max, y_max, valor_max;
	
	printf("insira m: ");
	scanf("%d", &m);
	printf("insira n: ");
	scanf("%d", &n);
	
	x_max = y_max = 0;
	valor_max = 0;
	
	for(x = 0; x <= n; x++){
		for(y = 0; y <= m; y++){
			valor = (x*y) - (x*x) +y;
			if(valor > valor_max){
				valor_max = valor;
				x_max = x;
				y_max = y;
			}
		}
	}
	printf("Valor maximo da funcao = %d foi alcancado com x = %d e y = %d\n",valor_max, x_max, y_max);
    
  	return 0;
}
