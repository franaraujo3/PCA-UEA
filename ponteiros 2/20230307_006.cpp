#include <stdio.h>
int sum_array(int *a, int *b, int *c, int t_a, int t_b) {
    if (t_a != t_b) {
        return 0;
    }
    
    for (int i = 0; i < t_a; i++) {
        *(c + i) = *(a + i) + *(b + i);
    }
    
    return 1;
}

int main() {
    int a[] = {2,3,4,5,6};
    int b[] = {7,8,9,10,11};
    int c[5];
    
    int yes = sum_array(a, b, c, 5, 5);
    
    if (yes) {
        printf("Soma dos arrays: %d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4]);
    }
    else {
        printf("Os arrays possuem tamanhos diferentes.\n");
    }
    
    return 0;
}

