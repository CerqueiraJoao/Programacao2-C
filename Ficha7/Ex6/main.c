/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 30 de Novembro de 2017, 9:54
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 10

int linhas_colunas() {
    int valor;

    do {
        scanf("%d", &valor);

        if (valor > MAXIMO) {
            puts("Valor superior ao máximo");
        }
        
    } while (!(valor <= MAXIMO));

    return valor;
}

int main(int argc, char** argv) {
    int i, j, linhas_m1, colunas_m1, linhas_m2, colunas_m2, matriz1[MAXIMO][MAXIMO], matriz2[MAXIMO][MAXIMO], matriz3[MAXIMO][MAXIMO];

    puts("Matriz 1");
    puts("Quantas linhas?");
    linhas_m1 = linhas_colunas();
    puts("Quantas colunas?");
    colunas_m1 = linhas_colunas();

    //ler matriz1
    for (i = 0; i < linhas_m1; ++i) {
        for (j = 0; j < colunas_m1; ++j) {
            printf("Introduza os valores [%d] [%d] na matriz ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    puts("\nMatriz 2");
    puts("Quantas linhas?");
    linhas_m2 = linhas_colunas();
    puts("Quantas colunas?");
    colunas_m2 = linhas_colunas();

    //ler matriz2
    for (i = 0; i < linhas_m2; ++i) {
        for (j = 0; j < colunas_m2; ++j) {
            printf("Introduza os valores [%d] [%d] na matriz ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    //verificação
    if (linhas_m1 != colunas_m2) {
        puts("Operação inpossivel de realizar");
    }

    puts("\nMatriz Final");

    //matriz3
    //ler
    for (i = 0; i < linhas_m1; ++i) {
        for (j = 0; j < colunas_m2; ++j) {
            matriz3[i][j] = matriz1[i][j] * matriz2[j][i];
        }
    }

    //escrever
    for (i = 0; i < linhas_m1; ++i) {
        puts("");
        for (j = 0; j < colunas_m2; ++j) {
            printf("%d ", matriz3[j][i]);
        }
    }

    return (0);
}

