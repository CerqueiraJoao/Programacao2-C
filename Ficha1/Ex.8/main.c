/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 14:29
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float fah, cent;
    
    puts("Qual a temperatura em Fahrenheit ");
    scanf("%f", &fah);
    
    cent = (fah - 32) * 5/9;
    
    printf("Em graus centigrafos são %.1f", cent);
    return (0);
}

