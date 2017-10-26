/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 12:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, sub, mult;
    
    puts("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    puts("Insira o segundo numero: ");
    scanf("%d", &num2);
    
    sub= num1 - num2;
    mult= sub * num1;
    
    printf("O resultado final é %d. ", mult);

    return (0);
}

