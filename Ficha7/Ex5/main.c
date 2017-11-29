/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 29 de Novembro de 2017, 18:17
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINHAS 2
#define MAX_COLUNAS 2

int main(int argc, char** argv) {
    int i, j, matriz[MAX_LINHAS][MAX_COLUNAS];

    //ler
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("Introduza os valores [%d] [%d] na matriz ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //escrever Inicial
    printf("\nMatriz Inicial");
    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("%d ", matriz[i][j]);
        }
    }

    //escrever Final
    printf("\n\nMatriz Final");
    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = (MAX_COLUNAS - 1); j >= 0; --j) {
            printf("%d ", matriz[j][i]);
        }
    }

    return (0);
}