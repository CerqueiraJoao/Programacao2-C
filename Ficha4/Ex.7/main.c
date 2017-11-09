/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 19:15
 */

#include <stdio.h>
#include <stdlib.h>
#include "headerex7.h"

int main(int argc, char** argv) {

    int ast, minimo = 1, maximo = 50;

    ast = lerInteiro(minimo, maximo);
    asteriscos(ast);

    return (0);
}

