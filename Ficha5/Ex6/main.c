/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 10 de Novembro de 2017, 17:47
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 10

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void par(int numero[]) {
    int i;

    printf("\nNumeros pares: ");
    for (i = 0; i < NUM_MAX; ++i) {
        if (numero[i] % 2 == 0) {
            printf(" %d ", numero[i]);
        }
    }
}

void impar(int numero[]) {
    int i;

    printf("\nNumeros impares: ");
    for (i = 0; i < NUM_MAX; ++i) {
        if (numero[i] % 2 != 0) {
            printf(" %d ", numero[i]);
        }
    }
}

int main(int argc, char** argv) {
    int i, numero[NUM_MAX];
    char op;

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Indique o numero");
        scanf("%d", &numero[i]);
    }

    do {
        limparBufferEntrada();
        puts("\nDeseja ver os numeros pares (P) ou os numeros impares (I)");
        scanf("%c", &op);

        if (op == 'P' || op == 'p') {
            par(numero);
        } else if (op == 'I' || op == 'i') {
            impar(numero);
        } else {
            puts("Opção Incorreta!!");
        }
        
    } while (!(op == 'P' || op == 'p' || op == 'I' || op == 'i'));

    return (0);
}

