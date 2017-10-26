/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 14:38
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num1, num2;
    
    puts("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    puts("Insira o segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 > num2){
     printf("Em ordem decrescente fica %d, %d. ", num1, num2);   
    }else{
     printf("Em ordem decrescente fica %d, %d. ", num2, num1);
    }  
    return (EXIT_SUCCESS);
}

