#include <stdio.h>
int main() {
    int n = 8, *p_int;
    float n_float = 8.5, *p_float;
    char letter = 'm', *p_char;
    
    p_int = &n;
    p_float = &n_float;
    p_char = &letter;
    
    printf("\nAntes da modificacao:\n");
    printf("inteiro = %d\n", n);
    printf("racional = %.2f\n", n_float);
    printf("caracter = %c\n", letter);
    
    *p_int = 9;
    *p_float = 9.5;
    *p_char = 'n';
    
    printf("\nApos a modificacao:\n");
    printf("inteiro = %d\n", n);
    printf("racional = %.2f\n", n_float);
    printf("caracter = %c\n", letter);   
    
    return 0;
}

