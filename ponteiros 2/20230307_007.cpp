#include <stdio.h>
void min_max(int v[], int n, int *min, int *max) {
    *min = v[0];
    *max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {5, 2, 8, 1, 4, 6, 3, 9, 7};
    int n = sizeof(v) / sizeof(int);
    int min, max;
    min_max(v, n, &min, &max);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    return 0;
}

