/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 12:25
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
     printf("O maior numero é %d. ", num1);   
    }else{
     printf("O maior numero é %d. ", num2);
    }    
    return (0);
}

