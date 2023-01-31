#include <stdio.h>

int produto_escalar(int x[], int y[], int n){
    int r = 0;
    
    for(int i = 0; i < n; i++){
        r += x[i] * y[i];
    }
    
    return r;
}

int main()
{
    int quant;

    do {
        printf("Informe a quantidade de numeros a serem informados para cada vetor (maximo de 100 numeros): ");
        scanf("%d", &quant);

        if(quant > 100 || quant < 0)
            printf("Numero Invalido! Informe outro valor:\n");

    } while (quant > 100 || quant < 0);

    int x[quant], y[quant];

    printf("Informe os numeros elementos do vetor x:\n");
    for(int i = 0; i < quant; i++){
        scanf("%d", &x[i]);
    }

    printf("Informe os numeros elementos do vetor y:\n");
    for(int i = 0; i < quant; i++){
        scanf("%d", &y[i]);
    }

    printf("\nO produto escalar entre os vetores e: %d", produto_escalar(x, y, quant));
    return 0;
}
