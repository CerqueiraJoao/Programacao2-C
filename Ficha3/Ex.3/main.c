/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 14:39
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int inicio, fim, num;
    
    puts("Inicio ");
    scanf("%d", &inicio);
    
    puts ("Fim ");
    scanf("%d", &fim);
    
    for(num = inicio + 1; num <= fim - 1; ++num){
        printf("%d ", num); 
    }
        
    return (0);
}

