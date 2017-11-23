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
    int i = 0, pos_ap, nome;

    puts("Indique o seu nome completo");
    lerString(nome_completo, MAX_STRING);

    pos_ap = lastIndex(' ', nome_completo, MAX_STRING);
    nome = strlen(nome_completo);

    puts("Nome");
    for (i = pos_ap; i < nome; ++i) {
        printf("%c", nome_completo[i]);
    }
    printf(" ");
    for (i = 0; i < pos_ap; ++i) {
        printf("%c", nome_completo[i]);
    }

    return (0);
}

