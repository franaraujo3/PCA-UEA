#include <stdio.h>

int imprime_pares(int quant, int nums[]){

    printf("\n\nnumeros pares da sequencia:\n");
    for (int i = 0; i < quant; i++ ){
        if(nums[i] %2 == 0)
            printf("%d ", nums[i]);
    }

}

int inf_nums(int quant){
    int n[quant];

    for(int i = 0; i < quant; i++) {
        do {
            printf("Insira um numero: ");
            scanf("%d", &n[i]);

            if (n[i] > 100)
                printf("\nNumero invalido! Insira um numero menor que 100\n");

        } while (n[i] > 100);
    }

    imprime_pares(quant, n);
}

int inf_quant(){
    int quant;

    do {
        printf("Insira o tamnaho da sequencia: ");
        scanf("%d", &quant);

        if(quant > 100 || quant < 0)
            printf("Tamanho Invalido! Insira novamente:\n");

    } while (quant > 100 || quant < 0);

    return quant;
}

int main(){
    int q;

    q = inf_quant();
    inf_nums(q);


    return 0;
}
