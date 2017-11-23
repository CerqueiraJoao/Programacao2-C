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
    char primeiro_nome[MAX_STRING], ultimo_nome[MAX_STRING];
    char virg[1] = VIRGULA;
        
    puts("Indique o primeiro nome");
    lerString(primeiro_nome, MAX_STRING);
    
    puts("Indique o ultimo nome");
    lerString(ultimo_nome, MAX_STRING);
    
    strcat(primeiro_nome, virg);
    
    printf("%s", primeiro_nome);
    
    return (0);
}

