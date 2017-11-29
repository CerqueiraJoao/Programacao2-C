/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 29 de Novembro de 2017, 12:05
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINHAS 4
#define MAX_COLUNAS 5

int main(int argc, char** argv) {
    int i, j, verificar, contar, matriz[MAX_LINHAS][MAX_COLUNAS];

    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("Introduza os valores [%d] [%d] na matriz ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf(" %d ", matriz[i][j]);
        }
    }

    puts("\nQual é o valor para verificar?");
    scanf("%d", &verificar);

    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            if (matriz[i][j] == verificar) {
                ++contar;
            }
        }
    }
    printf("Existem %d numeros %d na matriz!", contar, verificar);
    
    return (0);
}

