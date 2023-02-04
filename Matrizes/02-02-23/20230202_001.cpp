#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define EQUIPES 5
#define ALUNOS 4
int main(){
	char a[EQUIPES][ALUNOS][120], op, procura[120], sobrenome[120];
	int i, j, t;
	for(i=0; i<EQUIPES; i++){
		printf("Equipe: %d\n", i+1);
		for(j=0; j<ALUNOS; j++){
			printf("\n");
			printf("Primeiro nome do aluno %d: ", j+1);
			scanf("%s", &a[i][j]);
			printf("\n");
			printf("Sobrenome do aluno %d: ", j+1);
			scanf("%s", &sobrenome);
			strcat(a[i][j], " ");
			strcat(a[i][j], sobrenome);
			
		}
	}
	
	printf("Deseja consultar a equipe de um aluno? [S/N]: ");
	scanf("%c", &op);
	do{
		printf("Insira o primeiro nome do aluno: ");
		scanf("%s", &procura);
		printf("\n");
		printf("Insira o sobrenome do aluno: ");
		scanf("%s", &sobrenome);
		t=0;
		for(i=0; i<EQUIPES; i++){
			for(j=0; j<ALUNOS; j++){
				if(strcmp(a[i][j], procura)==0){
					t=i+1;
					break;
				}
			}
		}
		if(t!=0){
			printf("Aluno %s pertence a equipe %d\n", procura, t);
		}else{
			printf("Aluno nao pertence a nenhuma equipe!\n");
			printf("Deseja consultar a equipe de outro aluno? [S/N]: ");
			scanf("%c", &op);
		}
	}while(toupper(op)=='S');
	return 0;
}
