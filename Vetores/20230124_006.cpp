#include <stdio.h>
#include <stdlib.h>

int quant_nums(int quant, int n[]){
    int aux, cont;

    for(aux = 1; aux <= 6; aux++){
        cont = 0;
        for(int j = 0; j < quant; j++){
            if(n[j] == aux){
                cont++;
            }
        }
        printf("Quantidade de %d jogados: %d\n", aux, cont);
    }
}

int rand_nums(int quant){
    int lower = 1, upper = 6, dado[quant];

    for (int i = 0; i < quant; i++){
        dado[i] = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", dado[i]);
    }
    printf("\n");
    quant_nums(quant, dado);
}

int inf_quant(){
    int quant;

    do {
        printf("Informe a quantidade de vezers que o dado foi jogado: ");
        scanf("%d", &quant);

        if(quant > 100 || quant < 0)
            printf("Numero Invalido! Informe outro valor:\n");

    } while (quant > 100 || quant < 0);

    return quant;
}

int main(){
    int q;

    q = inf_quant();
    rand_nums(q);


    return 0;
}
