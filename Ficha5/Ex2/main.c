/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 9 de Novembro de 2017, 15:45
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 26

int main(int argc, char** argv) {

    int i, vetor[TAM_ARRAY];
    
    for(i = 5; i < TAM_ARRAY; ++i){
        vetor[i] = i;
        printf("%d ", vetor[i]);
    }
    
    return (0);
}

