#include <stdio.h>
#include <math.h>

float percentual(float valor, float total){
	float porcen;
	if(valor > total){
		porcen = 100 * (total/valor);
	}if(total > valor){
		porcen = 100 * (valor/total);
	}
	return porcen;
}
int absdif(int num1, int num2){
	int dif;
	dif = abs(num1-num2);
	return dif;
}
int scanIntIntervalo(int n1){
	printf("Insira um valor: ");
	scanf("%d", &n1);
	if(n1 > 0 && n1 <= 1000){
		return n1;
	}else{
		printf("Valor fora do intervalo!\n");
	}
}
int main(){
	int x, y, df;
	float pc;
	x = scanIntIntervalo(x);
	y = scanIntIntervalo(y);
	pc = percentual(x,y);
	df = absdif(x,y);
	
	printf("O percentual do menor em relacao ao maior: %.2f%%\n", pc);
	printf("O modulo da diferenca entre o maior e o menor: %d\n", df);
}
