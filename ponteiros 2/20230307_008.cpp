#include <stdio.h>
void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
	float a = 10.5;
	float b = 20.5;
	troca(&a, &b);
	printf("a = %.1f\n", a);
	printf("b = %.1f\n", b);
	return 0;
}

