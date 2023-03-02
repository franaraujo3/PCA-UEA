#include <stdio.h>
#include <string.h>

float add_nota(float nota){
    
    nota++;
    return nota;
    
}

int main()
{
    char equipeNomes[2][6][20] = {  { {"Maria"}, {"Jose"}, {"Pedro"}, {"Luana"}, {"Morgana"}, {"Gabriel"} }, 
                                    { {"Yasmin"}, {"Jualiana"}, {"Leticia"}, {"Victor"}, {"Elias"}, {"Aline"} }  };
    char equipeSexos[2][6] = {   { 'F', 'M', 'M', 'F', 'F', 'M' }, 
                                    { 'F', 'F', 'F', 'M', 'M', 'F' }  };
    float equipeNotas[2][6] = {   { 5.7, 8.2, 7.3, 9.0, 10.0, 6.1 }, 
                                    { 8.4, 6.7, 9.3, 5.2, 8.0, 6.4 }  };
    int cont[] = {0, 0}, contProj = 0, equipe;
    char resp, nome[30], sexo;
    float nota;
    
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++){
            if(equipeSexos[i][j] == 'F'){
                cont[i]++;
                if(equipeNotas[i][j] >= 8.0) contProj++;
            }
        }
    }
    
    if(cont[0] > cont[1])
        printf("equipe com mais mulheres e a equipe 1\n");
    else if(cont[0] < cont[1])
        printf("equipe com mais mulheres e a equipe 2\n");
    else
        printf("Ambas as equipes tem a mesma quantidade de mulheres\n");
    
    
    char projeto[contProj][30];
    int aux = 0;
    
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++){
            if(equipeSexos[i][j] == 'F' && equipeNotas[i][j] >= 8.0){
                strcpy(projeto[aux], equipeNomes[i][j]);
                aux++;
            }
        }
    }
    printf("\nPodem participar do projeto as alunas:\n");
    for(int i = 0; i < contProj; i++){
        printf("%s\n", projeto[i]);
    }
    
    
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++){
            if(equipeSexos[i][j] == 'F'){
                equipeNotas[i][j] = add_nota(equipeNotas[i][j]);
            }
        }
    }
        
}
