/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 19:15
 */

#include <stdio.h>
#include <stdlib.h>
#define asterisco '*'

int lerInteiro(int minimo, int maximo) {
    int ast;
    while (1) {
        puts("Quantos (*) quer colocar, entre 1 e 50?");
        scanf("%d", &ast);
        if (ast >= minimo && ast <= maximo) {
            break;
        } else {
            printf("Introduziu um valor fora dos limites!!\n");
            printf("\n");
        }
    }
    return ast;
}

void asteriscos(int num) {
    int i = 1;
    for (i = 1; i <= num; ++i) {
        printf("%c ", asterisco);
    }
}

int main(int argc, char** argv) {

    int ast, minimo = 1, maximo = 50;

    ast = lerInteiro(minimo, maximo);
    asteriscos(ast);

    return (0);
}

