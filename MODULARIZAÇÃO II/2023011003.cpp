
#include <stdio.h>

int length(int n){
    int cont=0;
    while (n > 0){
        cont++;
        n=n/10;
    }
    return cont;
}

int corresponde(int n, int d){
    int cont=0, c;
    if(length(d)>length(n))
    return 0;
    for(c=0; c<length(d); c++){
        if ((n%10)==(d%10))
            cont++;
        d=d/10;
        n=n/10;
    }
    return cont==c;
}

int main()
{
    int x, y;
    printf("Digite um numero X:\n");
    scanf("%d", &x);
    printf("Digite um numero Y:\n");
    scanf("%d", &y);
    if(corresponde(x, y))
    printf("corresponde");
    else
    printf("nao corresponde");
    return 0;
}
