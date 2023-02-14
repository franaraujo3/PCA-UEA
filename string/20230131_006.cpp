#include <stdio.h>
#include <string.h>
int main(){
 	char p[120], pinversa[120];
 	int valor;
 	printf("Insira uma palavra: ");
 	scanf("%s", &p);
 	for(int i = o; p[i], i++){
 		p[i] = strlwr(p[i]);
	 }
	 strcpy(pinversa, p);
	 strrev(p);
	 valor = strcmp(p, pinverssa);
	 if(valor == 0){
	 	printf("eh palindroma");
	 }else{
	 	printf("nao eh palindroma");
	 }
	 return 0;
}
