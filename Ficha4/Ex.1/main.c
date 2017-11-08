/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 7 de Novembro de 2017, 17:43
 */

#include <stdio.h>
#include <stdlib.h>
#define asterisco '*'
int lerInteiro() {
    int ast;
    
    scanf("%d", &ast);
    return ast;
}
void asteriscos(int num) {
    int i = 1;
    for (i = 1; i <= num; ++i) {
        printf("%c ", asterisco);
    }
}



int main(int argc, char** argv) {

    int ast;
    
    puts("Quantos (*) quer colocar?");
    ast = lerInteiro();
    asteriscos(ast);

    return (0);
}

