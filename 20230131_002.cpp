#include <stdio.h>
#include <string.h>
int main(){
	char carros[5][200];
	int consumo[5], economico = 0;
	float litros;
	for(int i = 0; i < 5; i++){
		printf("Insira um modelo para o carro %d: ", i+1);
		scanf("%s", &carros[i]);
	}
    for (int i = 0; i < 5; i++){
    	printf("Insira o consumo do carro %d: ", i+1);
        scanf("%d", &consumo[i]);
    }
	for(int i = 1; i <5 ; i++){
		if(consumo[i] > consumo[economico]){
			economico = i;
		}
	}
	printf("Carro mais economico: %s", carros[economico]);
	
	for(int i = 0; i < 5; i++){
		litros = 1000.0/consumo[i];
		printf("O modelo %s consome %.2f litros ao percorrer 1.000km\n\n", carros[i], litros);
	}
}
