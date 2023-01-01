#include <stdio.h>
#include <math.h>
int main(){
	int y;
	float x1, x2;
	
	printf("Insira um numero: ");
	scanf("%d", &y);
	
	x1 = y/2;
	x2 = x1;
	x1 = x1 - (pow(x1,2) - y) / (2*x1);
	
	do{
		x2 = x1;
		x1 = x1 - (pow(x1,2) - y) / (2*x1);
	}while(fabs(x2 - x1) >= 0.1);
	
	printf("X eh igual a %.2f\n", x1);
	printf("Y eh igual a %.2f", sqrt(y));
	
	return 0;
}
