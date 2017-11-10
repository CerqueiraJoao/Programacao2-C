/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 10 de Novembro de 2017, 17:15
 */

#include <stdio.h>
#include <stdlib.h>
#include "headerEx5.h"

int main(int argc, char** argv) {

    int i;
    double numero[NUM_MAX];

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Insira um valor");
        scanf("%lf", &numero[i]);
        limparBufferEntrada();
    }

    conteudo(numero);
    dobro(numero);
    somatorio(numero);
    maior(numero);
    menor(numero);
    
    return (0);
}

