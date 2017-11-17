/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 17 de Novembro de 2017, 16:44
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) {

    char primeiro_nome[MAX_STRING], ultimo_nome[MAX_STRING];
    int ordem_alfabetica;

    puts("Primeiro Nome ");
    lerString(primeiro_nome, MAX_STRING);

    puts("Ultimo Nome ");
    lerString(ultimo_nome, MAX_STRING);

    ordem_alfabetica = strcmp(primeiro_nome, ultimo_nome);

    puts("\nOrdem Alfabetica ");
    if (ordem_alfabetica < 0) {
        puts(primeiro_nome);
        puts(ultimo_nome);
    } else {
        puts(ultimo_nome);
        puts(primeiro_nome);
    }

    return (0);
}

