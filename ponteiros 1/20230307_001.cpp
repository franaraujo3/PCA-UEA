#include <stdio.h>
void print_vector(float *first, float *last){
	float *p;
	for(p = first; p <= last; p++){
		printf("%.1f\n", *p);
	}
}
int main(){
	float vector[5] = {1.0, 2.0, 3.0, 8.0,9.0}, vector2[5] = {2.1, 2.2, 2.3. 8.8,8.9}, vector3[5] = {3.1, 3.2, 3.3,8.7,9.8};
          
    printf("1a parte do vetor 1: ");
    print_vector(&vector[0], &vector[3]);
    printf("2a parte do vetor 1: ");
    print_vector(&vector[4], &vector[4]);
    printf("\n");
    printf("1a parte do vetor 2: ");
    print_vector(&vector2[0], &vector2[3]);
    printf("2a parte do vetor 2: ");
    print_vector(&vector2[4], &vector2[4]);
    printf("\n");
    printf("1a parte do vetor 3: ");
    print_vector(&vector3[0], &vector3[3]);
    printf("2a parte do vetor 3: ");
    print_vector(&vector3[4], &vector3[4]);
 
    return 0;
}
