#include <stdio.h>
void multixescalar(int a[3][3], int escalar, int out[3][3]){
    int fila, coluna;
    for (fila=0;fila<3;fila++){
        for (coluna=0;coluna<3; coluna++){
            out[fila][coluna]= a[fila][coluna]*escalar;
        }
    }
}

int main()
{
    int a[3][3];
    int resul[3][3];
    int fila, coluna;
    int esc;
    
    printf("Insira um valor para o escalar: ");
    scanf("%d", &esc);
    for (fila=0;fila<3;fila++){
        printf ("\n");
        for (coluna=0;coluna<3; coluna++){
            printf("\nmatriz [%d][%d]: ",fila+1,coluna+1);
      		scanf("%d", &a[fila][coluna]);
        }
    }
    multixescalar(a,esc, resul);
    for (fila=0;fila<3;fila++){
        printf ("\n");
        for (coluna=0;coluna<3; coluna++){
            printf (" %d", resul[fila][coluna]);
        }
    }
    return 0;
}



