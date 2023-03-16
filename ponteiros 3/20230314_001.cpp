#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void mediaDesvio(float *notas, int n, float *media, float *desvio){
	float soma = 0;
	float somaQuad = 0;
	for(int i = 0; i < n; i++){
		soma += *(notas + i );
		somaQuad += pow(*(notas + i), 2);
	}
	*media = soma/n;
	*desvio = sqrt((somaQuad/n) - pow(*media, 2));
}
int main(){
	 int n;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &n);

    float *notas = (float*) malloc(n * sizeof(float));
    
    for(int i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", notas + i);
    }

    float media, desvio;
    mediaDesvio(notas, n, &media, &desvio);

    printf("\nmedia da tuma =  %.2f\n", media);
    printf("\nDesvio padrao =  %.2f\n", desvio);
    
	return 0;
}
