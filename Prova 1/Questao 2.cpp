#include <stdio.h>
#include <math.h>
float num(){
    float n;
    do{
    printf("Digite um numero: ");
    scanf("%f", &n);
    if(n>=0&&n<=1)
        return n;
    printf("Erro! Digite um numero positivo entre 0 e 1:\n");
    }while(n<0||n>1);
}

float arctan(float x){
    float arc = x, k = 3, sign = -1;
    for(k= 3; fabs(pow(x, k)/k)>0.0001; k+=2){
        arc += pow(x, k)/k*sign;
        k += 2;
        sign *= -1;
    }
    return arc;
}
int main()
{
    float n = num();
	printf("Numero inserido: %.1f\n", n);
    printf("Arco tangente do numero: %.3f radianos\n", arctan(n));

}
