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
    int carateres = 0;
    
    puts("Primeiro Nome ");
    lerString(primeiro_nome, MAX_STRING);    
    
    carateres = strlen(primeiro_nome);
    
    printf("A palavra %s tem %d carateres.", primeiro_nome, carateres);
    
    return (0);
}

