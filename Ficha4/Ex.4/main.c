/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 10:53
 */

#include <stdio.h>
#include <stdlib.h>

float nota(int quantidade) {
    int i;
    double notas, soma;

    for (i = 0; i < quantidade; ++i) {
        printf("Introduza a nota do %d teste ", i + 1);
        scanf("%lf", &notas);
        soma = soma + notas;
    }
    return soma;
}

int main(int argc, char** argv) {

    int quantidade;
    double media;

    puts("Quantas notas quer introduzir?");
    scanf("%d", &quantidade);

    media = nota(quantidade);

    printf("A média das notas é %.2lf", media / quantidade);
    return (0);
}

