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

    char PrimeiroNome[MAX_STRING];
    
    puts("Qual é o seu primeiro nome?");
    scanf("%s", PrimeiroNome);
    
    lerString(PrimeiroNome, MAX_STRING);
    printf("%s", PrimeiroNome[MAX_STRING]);
    
    return (0);
}

