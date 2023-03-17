#include <stdio.h>
#include <stdlib.h>
int main() {
    int m, n;

    printf("Insira o numero de linhas da matriz: ");
    scanf("%d", &m);
    printf("Insira o numero de colunas da matriz: ");
    scanf("%d", &n);

    double **matrizA = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matrizA[i] = (double *) malloc(n * sizeof(double));
    }

	printf("\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) { 
		    printf("Elemento[%d][%d] da matriz A: ", i+1, j+1);
            scanf("%lf", &matrizA[i][j]);
        }
    }

    double **matrizB = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matrizB[i] = (double *) malloc(n * sizeof(double));
    }

    printf("\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento[%d][%d] da matriz B: ", i+1, j+1);
            scanf("%lf", &matrizB[i][j]);
        }
    }

    double **matrizC = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matrizC[i] = (double *) malloc(n * sizeof(double));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nSoma das matrizes:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1f ", matrizC[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}

