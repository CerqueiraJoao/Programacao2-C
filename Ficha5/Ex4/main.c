/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 9 de Novembro de 2017, 20:20
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 10

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
    int i, total = 0;
    double soma_num = 0, media, numero, numeros[NUM_MAX];

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Insira um valor");
        scanf("%lf", &numero);
        limparBufferEntrada();

        if (numero != -1) {
            numeros[i] = numero;
            soma_num += numeros[i];
            ++total;
        } else {
            break;
        }
    }

    media = (float) (soma_num / total);
    printf("\nMedia: %.2f", media);




    return (0);
}

