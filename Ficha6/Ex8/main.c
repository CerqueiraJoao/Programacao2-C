/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 23 de Novembro de 2017, 12:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) {
    char nome_completo[MAX_STRING];
    int i = 0, apelido, nome;

    puts("Indique o seu nome completo");
    lerString(nome_completo, MAX_STRING);

    apelido = lastIndex(' ', nome_completo, MAX_STRING);
    nome = strlen(nome_completo);

    puts("Nome");
    for (i = apelido; i < nome; ++i) {
        printf("%c", nome_completo[i]);
    }
    printf(" ");
    for (i = 0; i < apelido; ++i) {
        printf("%c", nome_completo[i]);
    }

    return (0);
}

