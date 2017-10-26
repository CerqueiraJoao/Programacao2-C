/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 15:33
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int num, i;
    
    puts("Insira um valor");
    scanf("%d", &num);
    
    if (num <= 0){
        printf("Introduziu um numero inválido!");
    }else {
        for (i = num; i >= 0; --i){
            if(i % 2 != 0){
                printf("%d ", i);
            }    
        }
    }

    return (0);
}

