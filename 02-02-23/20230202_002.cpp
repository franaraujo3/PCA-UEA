#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 20
void alfabetico(char list[MAX][120], int n){
	char s[120];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(strcmp(list[i], list[j]) > 0){
				strcpy(s, list[i]);
				strcpy(list[i], list[j]);
				strcpy(list[j], s);
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%s \n", list[i]);
	}
}
char elimina_nome(char list[MAX][120], int n){
	char nome[120];
	char new_list[MAX] [120];
	int compara, j = 0;
	printf("\nInsira um nome pra ser eliminado: ");
	scanf("%s", &nome);
	for(int i = 0; i < n; i++){
		compara = strcmp(nome, list[i]);
		if(compara != 0){
			strcpy(new_list[j], list[i]);
			j++;
		}
	}
	return new_list[j][120];
	
}
void imprime(char list[MAX][120], int n){
	for(int i = 0; i < n; i++){
		printf("%s \n ", list[i]);
	}
}
int main(){
	int nomes;
	char lista[MAX][120];
	printf("Insira a quantidade de nomes da lista: ");
	scanf("%d", &nomes);
	while(nomes > 20){
		printf("So eh possivel adicionar ate 20 nomes!");
		printf("\nInsira a quantidade de nomes novamente: ");
		scanf("%d", &nomes);
	}
	for(int i = 0; i < nomes; i++){
		printf("\nInsira um nome: ");
		scanf("%s", &lista[i]);
	}
	imprime(lista, nomes);
	elimina_nome(lista, nomes);
	alfabetico(lista, nomes);
	
}
