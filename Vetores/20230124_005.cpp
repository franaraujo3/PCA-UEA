#include <stdio.h>

int imprime_fat(int quant, int nums[]){
    int fat;

    printf("\n\n Os fatoriais dos numeros informados sao:\n");
    for (int i = 0; i < quant; i++){
        for(fat = 1; nums[i] > 1; nums[i] = nums[i] - 1)
            fat *= nums[i];
        printf("%d ", fat);
    }
}

int inf_nums(int quant){
    int n[quant];

    for(int i = 0; i < quant; i++) {
        do {
            printf("Informe um numero: ");
            scanf("%d", &n[i]);

            if (n[i] > 100)
                printf("\nNumero invalido! Informe outro numero menor que 100\n");

        } while (n[i] > 100);
    }

    imprime_fat(quant, n);
}

int inf_quant(){
    int quant;

    do {
        printf("Informe a quantidade de numeros a serem informados (maximo de 100 numeros): ");
        scanf("%d", &quant);

        if(quant > 100 || quant < 0)
            printf("Numero Invalido! Informe outro valor:\n");

    } while (quant > 100 || quant < 0);

    return quant;
}

int main(){
    int q;

    q = inf_quant();
    inf_nums(q);


    return 0;
}
