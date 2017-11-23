/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 17 de Novembro de 2017, 17:17
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"


int main(int argc, char** argv) {
    
    char primeiro_nome[MAX_STRING], carater;
    
    puts("Primeiro Nome ");
    lerString(primeiro_nome, MAX_STRING);
 
    carater = lerChar(carater);   
    countChar(primeiro_nome, carater);
    return (0);
}