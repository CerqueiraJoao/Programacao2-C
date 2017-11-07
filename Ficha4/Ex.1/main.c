/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 7 de Novembro de 2017, 17:43
 */

#include <stdio.h>
#include <stdlib.h>
#define asterisco '*'

void asteriscos(int num){
    int i = 1;
    for(i = 1; i <= num; ++i){
        printf("%c ", asterisco);
    }
}

int main(int argc, char** argv) {
   
    int ast;

    puts("Quantos (*) quer colocar?");
    scanf("%d", &ast);
    
    asteriscos(ast);
    
    return (0);
}

