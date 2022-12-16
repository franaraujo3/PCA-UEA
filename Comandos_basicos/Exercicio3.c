/*Enunciado: Ler salario de uma pessoa e calcule o novo salário considerando que esta pessoa
terá um ajuste de 10%*/
#include <stdio.h>
int main(){
	float salario, novo_salario;
	
	printf("Digite o salario atual: R$ ");
	scanf("%f", &salario);
	
	novo_salario = (salario * 0.10) + salario;
	
	printf("NOVO SALARIO: R$ %.2f\n", novo_salario);
	
	return 0;
}
