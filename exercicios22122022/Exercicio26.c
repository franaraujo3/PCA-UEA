#include<stdio.h>
 
int main() {
 int n, i, count = 0;
 
 printf("Digite um numero: ");
 scanf("%d", &n);
 
 for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
       count++;
       break;
    }
 }
 
 if (count == 0){
    printf("eh primo");
	}
 else{
 	printf("nao eh primo");
 }
    
 
 return 0;
}
