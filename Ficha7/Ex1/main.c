/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 23 de Novembro de 2017, 15:05
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINHAS 3
#define MAX_COLUNAS 3

int main(int argc, char** argv) {
    int i, j, x, y, matriz[MAX_LINHAS][MAX_COLUNAS], maior, menor;

    for (x = 0; x < MAX_LINHAS; ++x) {
        for (y = 0; y < MAX_COLUNAS; ++y) {
            printf("Introduza os valores [%d] [%d] na matriz ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    maior = matriz[0][0];
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            if (maior < matriz[i][j]) {
                maior = matriz[i][j];
            }
        }
    }
    
    menor = matriz[0][0];
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            if (menor > matriz[i][j]) {
                menor = matriz[i][j];
            }
        }
    }

    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf(" %d ", matriz[i][j]);
        }
    }

    printf("\nO maior é %d.", maior);
    printf("\nO menor é %d.", menor);
    return (0);
}

