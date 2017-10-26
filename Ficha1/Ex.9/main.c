/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 14:34
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float massa, altura, imc;
    
    puts("Qual o peso?");
    scanf("%f", &massa);
    
    puts ("Qual a altura em metros (Ex. 1.75)?");
    scanf("%f", &altura);
    
    imc = massa / (altura * altura);
    
    printf("O IMC é %.2f", imc);
    return (0);
}

