#include <stdio.h>
#include <stdlib.h>
void interseccao(int *A, int *B, int *C){
	int i, j, k;
    k = 1;
    C[0] = 0; 
    for(i=1; i<=A[0]; i++){
        for(j=1; j<=B[0]; j++){
            if(A[i] == B[j]){
                C[k++] = A[i];
                C[0]++;
                break; 
            }
        }
    }
}
int main() {
    int n, i, j;
    int *inter, *conjunto;
    scanf("%d", &n);

    conjunto = (int*) malloc(101 * sizeof(int));
    scanf("%d", &conjunto[0]); 
    for(i=1; i<=conjunto[0]; i++){
        scanf("%d", &conjunto[i]);
    }

    inter = (int*) malloc(101 * sizeof(int));
    for(i=1; i<=conjunto[0]; i++){
        inter[i] = conjunto[i];
    }
    inter[0] = conjunto[0];

    for(i=2; i<=n; i++){
        conjunto = (int*) malloc(101 * sizeof(int));
        scanf("%d", &conjunto[0]);
        for(j=1; j<=conjunto[0]; j++){
            scanf("%d", &conjunto[j]);
        }
        interseccao(inter, conjunto, inter);
    }
    printf("%d\n", inter[0]);
    for(i=1; i<=inter[0]; i++){
        printf("%d ", inter[i]);
    }
    printf("\n");
    return 0;
}


