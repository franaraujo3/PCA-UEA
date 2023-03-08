#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *find_letter(char *str, char letter, int *size) {
    int i, j = 0, len = strlen(str);
    int *positions = (int *) malloc(len * sizeof(int));
    for (i = 0; i < len; i++) {
        if (str[i] == letter) {
            positions[j] = i;
            j++;
        }
    }
    *size = j;
    return positions;
}
int main() {
    char str[100], letter;
    int *positions, size, i;
    printf("Digite uma string: ");
    scanf("%[^\n]s", str);
    printf("Digite uma letra: ");
    scanf(" %c", &letter);
    positions = find_letter(str, letter, &size);
    printf("Letra '%c' encontrada nas posicoes: ", letter);
    for (i = 0; i < size; i++) {
        printf("%d ", positions[i]);
    }
    printf("\nTotal de ocorrencias: %d\n", size);
    free(positions);
    return 0;
}

