#include <stdio.h>
int order(int *a, int *b, int *c) {
    int t;
    int changed = 0;
    
    if (*a > *b) {
        t = *a;
        *a = *b;
        *b = t;
        changed = 1;
    }
    if (*a > *c) {
        t = *a;
        *a = *c;
        *c = t;
        changed = 1;
    }
    if (*b > *c) {
        t = *b;
        *b = *c;
        *c = t;
        changed = 1;
    }
    
    if (*a == *b && *a == *c) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int a, b, c;
    
    printf("Insira um valor inteiro para A: ");
    scanf("%d", &a);
    
    printf("Insira um valor inteiro para B: ");
    scanf("%d", &b);
    
    printf("Insira um valor inteiro para C: ");
    scanf("%d", &c);
    
    int equal = order(&a, &b, &c);
    
    printf("\nValores ordenados: %d %d %d\n", a, b, c);
    
    if (equal) {
        printf("Os valores sao iguais.\n");
    }
    else {
        printf("Os valores sao diferentes.\n");
    }
    
    return 0;
}

