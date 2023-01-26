
#include <stdio.h>
#include <math.h>

int binToDec(int n){
    int dec=0, c=0;
    while(n>0){
        dec += n%10*pow(2, c);
        n=n/10;
        c++;
    }
    return dec;
}

int main()
{
    int x;
    printf("Digite um numero em binario:\n");
    scanf("%d", &x);
    printf("Seu numero em decimal eh:\n%d", binToDec(x));
    return 0;
}
