/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 8 de Novembro de 2017, 20:29
 */

#include <stdio.h>
#include <stdlib.h>
#include "headerEx8.h"



int main(int argc, char** argv) {
    int minimo = 0, maximo = 20, i, nota, contador = 0;
    
    for(i = 0; i <= ALUNOS; ++i ){
        nota = lerInteiro(minimo, maximo);
        
        
        contador += nota;
    }
 
    return (0);
}

