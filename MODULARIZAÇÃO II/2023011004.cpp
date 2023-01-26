
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

int segmento(int n, int d){
    int flag = 0;
    if(length(n)>length(d))
    return 0;
    for(int c=0; c<length(n); c++){
        if ((n%10)==(d%10))
        {
            if(corresponde(d, n))
            flag = 1;
        }
        d=d/10;
    }
    return flag;
}

int main()
{
    int x, y;
    printf("Digite um numero X:\n");
    scanf("%d", &x);
    printf("Digite um numero Y:\n");
    scanf("%d", &y);
    if(segmento(x, y))
    printf("eh segmento");
    else
    printf("nao eh segmento");
    return 0;
}
