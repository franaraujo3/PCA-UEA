#include <stdio.h>
#include <math.h>
int main(){
	int n, flag, a, b, c;
	printf("Insira um numero inteiro positivo:\n");
    scanf("%d", &n);
    printf("Hipotenusas entre 1 e N:\n");
    for(c=1; c<=n; c++){
        flag=0;
        for(a=0; a<c; a++)
            for(b=0; b<a; b++){
                if(pow(c,2)==pow(a,2)+pow(b,2))
                flag=1;
            }
        if(flag)
            printf("%d\n", c);
    }
}
