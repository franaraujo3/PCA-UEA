#include <stdio.h>
#include <string.h>
#define MAX 50

void sortEquipe(char nomes[][MAX], int vet[], int len){
    char temp[MAX] = "";
    int aux;
    for(int s = 0; s<len-1; s++){
    for(int i = 0; i < len-s-1; i++){
        if(vet[i]<vet[i+1]){
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
            strcpy(temp, nomes[i]);
            strcpy(nomes[i], nomes[i+1]);
            strcpy(nomes[i+1], temp);
        }
    }
    }
}

void printEquipe(char funcao[], char nomes[][MAX], int len){
    printf("%s:\n", funcao);
    for(int i = 0; i<len; i++){
        printf("%s\n", nomes[i]);
    }
}

int main()
{
    char goleiros[3][MAX] = {"Hugo Souza", "Matheus Cunha", "Santos"}, defesa[7][MAX] = {"Rodrigo Caio",
        "Leo Pereira", "David Luiz", "Cleiton", "Fabricio Bruno", "Pablo", "Matheuzinho"}, meio[8][MAX] =
        {"Arturo Vidal", "Thiago Maia", "Erick", "Gerson", "Everton Ribeiro", "De Arraescaeta","Victor Hugo",
        "Matheus Franca"}, ataque[5][MAX] = {"Gabi", "Bruno Henrique", "Pedro", "Marinho", "Everton"};
    int notasGoleiros[3] = {8,9,10}, notasDefesa[7] = {4,5,6,7,8,9,10}, notasMeio[8]={3,4,5,6,7,8,9,10},
    notasAtaque[5] = {6,7,8,9,10};
    sortEquipe(goleiros, notasGoleiros, 3);
    sortEquipe(defesa, notasDefesa, 7);
    sortEquipe(meio, notasMeio, 8);
    sortEquipe(ataque, notasAtaque, 5);
    printEquipe("Goleiros", goleiros, 1);
    printEquipe("Defesa", defesa, 4);
    printEquipe("Meio de Campo", meio, 4);
    printEquipe("Ataque", ataque, 2);
    return 0;
}
