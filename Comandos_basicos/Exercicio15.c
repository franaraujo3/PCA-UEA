#include <stdio.h>
int main(){
	float valor_hora, salario_liquido, salario_bruto, imposto, inss, sindicato;
	int horas_trabalhadas;
	printf("Insira o valor que voce ganha por hora: R$");
	scanf("%f", &valor_hora);
	
	printf("Insira a quantidade de horas trabalhadas por mes: ");
	scanf("%d", &horas_trabalhadas);
	
	salario_liquido = valor_hora * horas_trabalhadas;
	
	imposto = salario_liquido * 0.11;
	
	inss = salario_liquido * 0.08;
	
	sindicato = salario_liquido * 0.05;
	
	salario_bruto = salario_liquido - imposto - inss - sindicato;
	
	printf("\nSalario bruto: R$%.2f", salario_bruto);
	printf("\nQuantia paga ao INSS: R$%.2f", inss);
	printf("\nSalario liquido: R$%.2f", salario_liquido);
	
	
}
