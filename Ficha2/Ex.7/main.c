/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 17:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num1, num2, num3;
    
    puts("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    puts("Insira o segundo numero: ");
    scanf("%d", &num2);
    
    puts("Insira o terceiro numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num2 > num3){
     printf("Em ordem crescente fica %d, %d, %d. ", num3, num2, num1);   
    }else if (num3 > num2 && num2 > num1){
     printf("Em ordem crescente fica %d, %d, %d. ", num1, num2, num3);
    }else {
     printf("Em ordem crescente fica %d, %d, %d. ", num1, num3, num2);
    } 
    return (0);
}

