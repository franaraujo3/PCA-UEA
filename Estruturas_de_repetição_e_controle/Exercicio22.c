#include <stdio.h>

int main() {
   float n1, n2, n3, media, max_n1, min_n1, max_n2, min_n2, max_n3, min_n3, max_media, min_media;
   int control;
   char op = 'S';
   do{
   	printf("Insira a nota do exercicio 1: ");
   	scanf("%f", &n1);
   	printf("Insira a nota do exercicio 2: ");
   	scanf("%f", &n2);
   	printf("Insira a nota do exercicio 3: ");
   	scanf("%f", &n3);
   	
   	
   	media = (n1 + n2 + n3) / 3;
   	if(control == 0){
   		max_n1 = n1;
   		min_n1 = n1;
   		max_n2 = n2;
   		min_n2 = n2;
   		max_n3 = n3;
   		min_n3 = n3;
   		max_media = media;
   		min_media = media;
	   }
	control = 1;
	if(n1 > max_n1){
		max_n1 = n1;
	}else if(n1 < min_n1){
		min_n1 = n1;
	}else if(n2 > max_n2){
		max_n2 = n2;
	}else if(n2 < min_n2){
		min_n2 = n2;
	}else if(n3 > max_n3){
		max_n3 = n3;
	}else if(n3 < min_n3){
		min_n3 = n3;
	}else if(media > max_media){
		max_media = media;
	}else if(media < min_media){
		min_media = media;
	}
	printf("\nDeseja inserir as notas de outro aluno? [S/N]: ");
	scanf("%c", &op);
	
   	
   }while(op == 'S');
    printf("\nMaior media do exercicio 1: %.2f", max_n1);
   printf("Menor media do exercicio 1: %.2f", min_n1);
   printf("\nMaior media do exercicio 2: %.2f", max_n2);
   printf("\nMenor media do exercicio 2: %.2f", min_n2);
   printf("\nMaior media do exercicio 3: %.2f", max_n3);
   printf("\nMenor media do exercicio 3: %.2f", min_n3);
   printf("\nMaior media geral: %.2f", max_media);
   printf("\nMenor media geral: %.2f", min_media);
   
   
}
