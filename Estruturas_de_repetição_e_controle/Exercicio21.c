#include <stdio.h>
int main(){
	int i,j,result;

	for (i = 1; i < 10; i++){
		printf("\n");
		printf("Tabuada do %d:", i);
		printf("\n");
		for (j= 1; j < 11; j++){
			result = i * j;
			
			printf("\n%d x %d = %d", i, j, result);
		}
		printf("\n");	
	}
	
	return 0;
}

