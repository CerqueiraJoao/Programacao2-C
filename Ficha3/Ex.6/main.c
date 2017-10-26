/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 15:25
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int limite, salto, num = 0;
    
    puts("Diga o limite ");
    scanf("%d", &limite);
    
    puts("Diga o salto ");
    scanf("%d", &salto);
    
    for (num = 0; num <= limite; ++num){
        if(num % salto == 0){
            printf("%d ", num);
        }
    }
    
    return (0);
}

