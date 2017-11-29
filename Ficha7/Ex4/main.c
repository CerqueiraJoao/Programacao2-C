/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 29 de Novembro de 2017, 17:58
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINHAS 3
#define MAX_COLUNAS 3

int main(int argc, char** argv) {
    int i, j, matrizA[MAX_LINHAS][MAX_COLUNAS], matrizB[MAX_LINHAS][MAX_COLUNAS];

    //ler
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("Introduza os valores [%d] [%d] na matriz ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    //escrever A
    printf("\nMatriz A");
    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("%d ", matrizA[i][j]);
        }
    }
    
    //escrever B
    printf("\n\nMatriz B");
    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            matrizB[i][j] = matrizA[j][i];
            printf("%d ", matrizB[i][j]);
            
        }
    }
    
    return (0);
}

