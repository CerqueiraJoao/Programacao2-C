/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 11:37
 */

#include <stdio.h>
#include <stdlib.h>

void fatorial(int num) {
    int i, valor_final = 1;

    for (i = 1; i <= num; ++i) {
        valor_final = valor_final * i;
    }
    printf("O valor em fatorial é %d.", valor_final);
}

int main(int argc, char** argv) {

    int num;
    puts("Indique o numero para determinar o fatorial ");
    scanf("%d", &num);

    fatorial(num);

    return (0);
}

