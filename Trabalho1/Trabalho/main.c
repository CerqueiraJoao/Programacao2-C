/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 30 de Novembro de 2017, 14:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h" //header file criado 

int main(int argc, char** argv) {

    int matriz[MAX_MATRIZ][MAX_MATRIZ]; //Matriz Principal
    char token[MAX_TOKEN]; //Tokens

    escolher_token(token); //Funçao que permite escolher o token
    matriz_inicial(matriz); //Funçao que imprime a matriz toda com '='
    escrever_matriz(matriz); //Função que escreve a matriz
    jogar(matriz, token); //Função que permite escolher as posiçoes

    return (0);
}