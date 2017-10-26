/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 18:03
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int num;
    
    puts("Insira um número");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("O numero %d é PAR!", num);
    }else{
        printf("O numero %d é IMPAR!", num);
    }

    return (0);
}

