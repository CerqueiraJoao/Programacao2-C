/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 4 de Janeiro de 2018, 12:13
 */

#include <stdio.h>
#include <stdlib.h>

void soma(int num1, int num2, long *res){
    *res = num1 + num2;
}

int main(int argc, char** argv) {
    int num1, num2;
    long resultado = 0, *res = NULL;
    res = &resultado;
    
    printf("Numero 1? ");
    scanf("%d", &num1);
    
    printf("Numero 2? ");
    scanf("%d", &num2);
    
    soma(num1, num2, res);
    
    printf("Resultado final %ld", resultado);
    return (0);
}

