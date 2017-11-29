/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 29 de Novembro de 2017, 12:19
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LINHAS 4
#define MAX_COLUNAS 4

int main(int argc, char** argv) {
    int i, j;
    float matriz[MAX_LINHAS][MAX_COLUNAS];

    //ler
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            if (j == 0) {
                printf("Codigo: ");
                scanf("%f", &matriz[i][j]);
            } else if (j == 1) {
                printf("Teste 1 ");
                scanf("%f", &matriz[i][j]);
            } else if (j == 2) {
                printf("Teste 2 ");
                scanf("%f", &matriz[i][j]);
            }
        }
    }

    puts("Codigo  Teste 1  Teste 2  Media");
    for (i = 0; i < MAX_LINHAS; ++i) {
        matriz[i][3] = (matriz[i][1] + matriz[i][2]) / 2;
    }

    //escrefer
    for (i = 0; i < MAX_LINHAS; ++i) {
        puts("");
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("   %.0f    ", matriz[i][j]);
        }
    }

    return (0);
}

