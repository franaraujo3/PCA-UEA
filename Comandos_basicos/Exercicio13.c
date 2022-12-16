#include <stdio.h>
#include <math.h>
int main(){
	int x, y, op1;
	float z, op2, op3;
	
	printf("Insira um numero inteiro x: ");
	scanf("%d", &x);
	
	printf("Insira um numero iteiro y: ");
	scanf("%d", &y);
	
	printf("Insira um numero real z: ");
	scanf("%f", &z);
	
	op1 = (x *2) * (y / 2);
	
	op2 = (x * 3) + z;
	
	op3 = pow(z,3);
	
	printf("\nO produto do dobro de %d com metade de %d eh %d", x, y, op1);
	printf("\nA soma do triplo de %d com %.1f eh %.1f", x, z, op2);
	printf("\n%.1f elevado ao cubo eh %.1f", z, op3);
	
	return 0;
}
