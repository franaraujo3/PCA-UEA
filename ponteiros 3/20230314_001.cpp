#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void mediaDesvio(float *notas, int n, float *media, float *desvio){
	float soma = 0;
	float soma2 = 0;
	for(int i = 0; i < n; i++){
		soma += *(notas + i );
		soma2 += pow(*(notas + i), 2);
	}
	*media = soma/n;
	*desvio = sqrt((soma2/n)2 - pow(*media, 2));
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

    printf("\nmedia da tuma =  %.2f", media);
    printf("\nDesvio padrao =  %.2f", desvio);
    
	return 0;
}
