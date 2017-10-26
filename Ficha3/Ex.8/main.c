/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 15:52
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num, i, par;
    
    puts("Insira quantos pares pretende");
    scanf("%d", &num);
    
    while (par <= num - 1 ){

        if(i % 2 == 0){
                printf("%d ", i);
                par += 1;
            } 
       ++i;
    }
    
    return (0);
}

