/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 13:42
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14


int main(int argc, char** argv) {
    
    float area, perim, raio;
    
    puts("Insira o raio da circunferência: ");
    scanf("%f", &raio);
    
    area= PI * raio * raio;
    perim= 2 * PI * raio;
    
    printf("A área da circunferência é %.2f. \n", area);
    printf("O perimetro da circunferência é %.2f.\n", perim);
    
    return (0);
}

