/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 4 de Janeiro de 2018, 14:38
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 3

void soma(int numeros[]) {
    numeros[2] = numeros[0] + numeros[1];
}

int main(int argc, char** argv) {
    int *numeros = NULL;
    numeros = (int *) malloc(MAXIMO * sizeof (int));

    numeros[0] = 12;
    numeros[1] = 3;
    printf("Numero 1: %d\n", numeros[0]);
    printf("Numero 2: %d\n", numeros[1]);
    soma(numeros);
    printf("Numero 3: %d", numeros[2]);
    return (0);
}

