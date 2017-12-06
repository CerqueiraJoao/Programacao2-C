/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 30 de Novembro de 2017, 14:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


int main(int argc, char** argv) {

    int matriz[MAX_MATRIZ][MAX_MATRIZ];
    char token[MAX_TOKEN];


    escolher_token(token);
    matriz_igual(matriz);
    escrever_matriz(matriz);
    jogar(matriz, token);

    return (0);
}