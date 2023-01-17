#include <stdio.h>
#include <math.h>
int intscan(){
    int n;
    do{
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n>=0)
        return n;
    printf("Erro! Digite um numero inteiro positivo: ");
    }while(n<0);
}

int hiperfatorial(int n){
    int hyperfat = 0, i;
    for(i=0;i<=n;i++){
        hyperfat += pow(i,i);
    }
    return hyperfat;
}
int main()
{
    int n = intscan();
	printf("Numero inserido: %d\n", n);
    printf("Hiperfatorial do numero: %d\n", hiperfatorial(n));
}
