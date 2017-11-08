/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 20:29
 */

#include <stdio.h>
#include <stdlib.h>
#define alunos 10

int lerInteiro(int minimo, int maximo) { 
    int nota;
    while (1) {
        puts("Qual foi a nota obtida?");
        scanf("%d", &nota);
        if (nota >= minimo && nota <= maximo) {
            break;
        } else {
            printf("Introduziu uma nota inválida!!\n");
        }
    }
    return nota;
}

int main(int argc, char** argv) {
    int minimo = 0, maximo = 20, i, nota, contador;
    for(i = 0; i <= alunos; ++i ){
        nota =lerInteiro(minimo, maximo);
        contador += nota;
    }
 
    return (0);
}

