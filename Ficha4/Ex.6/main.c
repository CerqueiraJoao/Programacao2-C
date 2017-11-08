/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 11:54
 */

#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void retangulo(char caracter, int linhas, int colunas) {
    int i, j;

    for (i = 1; i <= linhas; ++i) {
        for (j = 1; j <= colunas; ++j) {
            if (i > 1 && i < colunas && j > 1 && j < linhas) {
                printf(" ");
                continue;
            } else {
                printf("%c", caracter);
            }
        }
        puts("");
    }
}

int main(int argc, char** argv) {

    char caracter;
    int linhas, colunas;

    puts("Qual é o caracter que quer utilizar");
    scanf("%c", &caracter);

    limparBufferEntrada();

    puts("Qual é o numero de linhas?");
    scanf("%d", &linhas);

    puts("Qual é o numero de colunas?");
    scanf("%d", &colunas);

    retangulo(caracter, linhas, colunas);

    return (0);
}

