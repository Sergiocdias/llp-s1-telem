//Aluno: Sérgio Cavalcante Dias
//Avaliação 4

#include <stdio.h>

void soma_linha(int n, int slinha[n], int m[n][n])
{
    int i, j;
    for(i = 0; i < n; i++){
        slinha[i] = 0;
        for(j = 0; j < n; j++) {
            slinha[i] += m[i][j];
        }
    }
}

void array(int tamanho, int vetor[])
{
    int i;
    printf("A soma das linhas eh:");
    for(i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n");
}

void imprimir_matriz(int tamanho, int matriz[tamanho][tamanho])
{
    int i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

#define size 3
int main()
{

    int matriz[size][size] = {{10, 7, 13},
                              {4, 25, 36},
                              {15, 15, 25}
    };
    int somas[size];                           
    soma_linha(size, somas, matriz);

    imprimir_matriz(size, matriz);
    array(size, somas);

    return 0;
}
