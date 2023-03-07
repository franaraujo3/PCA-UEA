#include <stdio.h>
void print_vector(float *first, float *last){
	for(;first <= last; first++){
		printf("%.1f\n", *first);
	}
}
int main(){
	float vector[3] = {1.0, 2.0, 3.0};
	print_vector(&vector[0], &vector[2]);
}
