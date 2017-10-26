/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 14:59
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num1, num2, num3;
    
    puts("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    puts("Insira o segundo numero: ");
    scanf("%d", &num2);
    
    puts("Insira o terceiro numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num2 > num3){
     printf("O menor numero é %d. ", num3);   
    }else if (num2 > num1 && num3 > num1){       
     printf("O menor numero é %d. ", num1);
    }else{
        printf("O menor numero é %d", num2);
    }
    return (0);
}

