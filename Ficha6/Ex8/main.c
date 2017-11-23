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
    int i, apelido, nome;
    
    puts("Indique o seu nome completo");
    lerString(nome_completo, MAX_STRING);
    
    apelido = lastIndex(' ', nome_completo, MAX_STRING);
    

    return (0);
}

