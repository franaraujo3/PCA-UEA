
#include <stdio.h>
#include <math.h>

int decToBin(int n){
    int bin=0, c=0;
    while(n>0){
        bin += n%2*pow(10, c);
        n/=2;
        c++;
    }
    return bin;
}

int main()
{
    int x;
    printf("Digite um numero em decimal:\n");
    scanf("%d", &x);
    printf("Seu numero em binario eh:\n%d", decToBin(x));
    return 0;
}
