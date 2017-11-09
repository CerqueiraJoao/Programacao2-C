/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#define ASTERISCO '*'

int lerInteiro(int minimo, int maximo) {
    int ast;
    while (1) {
        puts("Quantos (*) quer colocar, entre 1 e 50?");
        scanf("%d", &ast);
        if (ast >= minimo && ast <= maximo) {
            break;
        } else {
            printf("Introduziu um valor fora dos limites!!\n");
            printf("\n");
        }
    }
    return ast;
}

void asteriscos(int num) {
    int i = 1;
    for (i = 1; i <= num; ++i) {
        printf("%c ", ASTERISCO);
    }
}