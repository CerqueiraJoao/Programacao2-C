/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 13:54
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int base, altura;
    float area;
    
    puts("Insira o comprimento da base do triângulo: ");
    scanf("%d", &base);
    
    puts("Insira a altura do triângulo: ");
    scanf("%d", &altura);
    
    area= (float)(base * altura) / 2;
    
    printf("A área do triângulo é %.2f. \n", area);
    
    return (0);
}

