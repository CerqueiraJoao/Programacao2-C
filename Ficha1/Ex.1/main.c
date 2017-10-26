/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 11:30
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, soma;
    
    puts("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    puts("Insira o segundo numero: ");
    scanf("%d", &num2);
    
    soma= num1 + num2;
    
    printf("O resultado da soma é %d. ", soma);

    return (0);
}

