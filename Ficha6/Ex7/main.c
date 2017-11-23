/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 23 de Novembro de 2017, 10:34
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) {
    char nome_completo[MAX_STRING];
    int tamanho = 0;
    
    puts("Indique o seu nome completo");
    lerString(nome_completo, MAX_STRING);
    
    tamanho = strlen(nome_completo);
    countChar(nome_completo, tamanho);    

    return (0);
}

