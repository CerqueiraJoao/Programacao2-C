/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 17 de Novembro de 2017, 16:53
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"


int main(int argc, char** argv) {
    
    char primeiro_nome[MAX_STRING], nome[MAX_STRING];
    
    puts("Primeiro Nome ");
    lerString(primeiro_nome, MAX_STRING);
    
    strcpy(nome, primeiro_nome);
    
    puts("\nNome");
    puts(nome);

    return (0);
}

