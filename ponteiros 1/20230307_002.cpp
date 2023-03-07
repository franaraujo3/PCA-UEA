#include <stdio.h>
int* search_address(int *first, int *last, int valor){
	for(;first <= last; first++){
		if(*first == valor){
			return first; 
		}
	}
	return NULL;
}
int main(){
	int vector[10] = {2,2,2,4,6,8,10,12,14,16};
	int *pvet = &vector[0];
	int *found = search_address(pvet, &vector[9], 2);
	while(found != NULL){
		printf("Endereco: %d\n", found);
		pvet = found + 1;
		found = search_address(pvet, &vector[9], 2);
	}
}
