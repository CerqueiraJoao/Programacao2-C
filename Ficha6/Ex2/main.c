/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 16 de Novembro de 2017, 17:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) {

    char primeiro_nome[MAX_STRING];

    puts("Qual é o seu primeiro nome?");

    lerString(primeiro_nome, MAX_STRING);

    printf("Primeiro Nome: %s", primeiro_nome);

    return (0);
}

