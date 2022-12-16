#include <stdio.h>
int main(){
	float valor_hora, salario;
	int horas_trabalhadas;
	printf("Insira o valor que voce ganha por hora: R$");
	scanf("%f", &valor_hora);
	
	printf("Insira a quantidade de horas trabalhadas por mes: ");
	scanf("%d", &horas_trabalhadas);
	
	salario = valor_hora * horas_trabalhadas;
	
	printf("O total do salario no mes eh R$%.2f.", salario);
	
	return 0;
}
