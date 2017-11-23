/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 23 de Novembro de 2017, 14:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) {
    char virg[2] = VIRGULA, primeiro_nome[MAX_STRING], ultimo_nome[MAX_STRING];

    puts("Indique o primeiro nome");
    lerString(primeiro_nome, MAX_STRING);

    puts("Indique o ultimo nome");
    lerString(ultimo_nome, MAX_STRING);

    strcat(primeiro_nome, virg);
    strcat(primeiro_nome, ultimo_nome);

    printf("%s", primeiro_nome);

    return (0);
}

