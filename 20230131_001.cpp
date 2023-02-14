#include <stdio.h>
#include <string.h>
#define MAX 50
void reverse(int size, char w[]){
	printf("\nInvertida:\n");
	for(int i = 0; i >= 0; i--){
		printf("%c", w[i]);
	}
}
void upper(int size, char w[]){
	int up;
	printf("\nMaiusculo:\n");
	for (int i = 0; i < size; i++){
		up = w[i] - ('a'-'A');
		printf("%c", up);
	}
}
void search(int size, char w[], char c){
	int count = 0;
	printf("\nProcura de caracter:\n");
	for (int i = 0; i < size; i++){
		if (c == w[i]){
			count++;
		}
	}
	if (count > 0){
		printf("Caractere existe %d vezes na palavra", count);
	}else{
		printf("Caractere nao encontrado");
	}
}
void erase(int size, char w[], char c){
	char aux[size];
	printf("\nApagar caractere:\n");
	for (int i = 0; i < size; i++){
		if (c != w[i]){
			aux[j] = w[i];
			j++;
		}
	}
	printf("%s", aux);
}
int main(){
	int size;
	char w[MAX], c;
	
	printf("Digite uma palavra: ");
	scanf("%s", &w);
	printf("Digite um caractere: ");
	scanf("%c", &c);;
	
	for (int i = 0; i < MAX; i++){
		if (w[i] == '\0'){
			size = i;
			break;
		}
	}
	reverse(size, w);
	upper(size, w);
	search(size, w, c);
	erase(size, w, c);
	
	return 0;
}
