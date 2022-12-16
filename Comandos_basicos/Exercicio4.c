/*Enunciado: Faça um algoritmo que leia o valor de uma conta e calcule a porcentagem do
garçom.*/
#include <stdio.h>
int main(){
	float valor_conta, porcentagem_garcom;
	
	printf("Insira o valor da conta: R$ ");
	scanf("%f", &valor_conta);
	
	porcentagem_garcom = 0.10 * valor_conta;
	
	printf("\nValor da conta: R$ %.2f", valor_conta);
	printf("\nPorcentagem do garcom: R$ %.2f", porcentagem_garcom);
	
}
