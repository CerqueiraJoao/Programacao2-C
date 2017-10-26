/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 12:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int area, perim, comp, larg;
    
    puts("Insira o comprimento do retângulo: ");
    scanf("%d", &comp);
    
    puts("Insira a largura do retângulo: ");
    scanf("%d", &larg);
    
    area= comp * larg;
    perim= (comp + larg) * 2;
    
    printf("A área do retângulo é %d. \n", area);
    printf("O perimetro do retângulo é %d.\n", perim);
    
    return (0);
}

