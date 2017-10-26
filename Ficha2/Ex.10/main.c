/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 18:12
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num;
    
    puts("Insira um número");
    scanf("%d", &num);
    
    if(num % 5 == 0 && num % 3 == 0){
        printf("O numero %d é divisível por 3 e 5!", num);
    }else{
        printf("O numero %d não é divisível por 3 e 5!", num);
    }
    return (0);
}

