/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 9 de Novembro de 2017, 15:36
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 20

int main(int argc, char** argv) {

    int i, vetor[TAM_ARRAY];
    for(i = 0; i < TAM_ARRAY; ++i){
        vetor[i] = i;
        printf("%d ", vetor[i]);
    }
    return (0);
}

