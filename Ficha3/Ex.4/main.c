/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 14:49
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num, soma;
    
    for(num = 1; num <= 100; ++num){
        printf("%d ", num);
        soma += num;
    }
    printf("\nO somatório de todos os valores é %d.", soma);
    
    return (0);
}

