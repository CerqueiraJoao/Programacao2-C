/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 29 de Novembro de 2017, 12:19
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINHAS 4
#define MAX_COLUNAS 3

int main(int argc, char** argv) {
    int i, j, soma, matriz[MAX_LINHAS][MAX_COLUNAS];

    //ler
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            if (j == 0) {
                printf("Codigo: ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 1) {
                printf("Teste 1 ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 2) {
                printf("Teste 2 ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    puts("Codigo  Teste 1  Teste 2  Media");

    //escrever
    for (i = 0; i < MAX_LINHAS; ++i) {
        soma = 0;
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("   %.d    ", matriz[i][j]);
            if (j > 0) {
                soma += matriz[i][j];
            }
        }
        printf("%.2f", (float) soma / 2);
    }

    return (0);
}

