/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 16 de Novembro de 2017, 14:34
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 1000


void verificarPrimos(int array[], int valor) {
    int i;

    for (i = 0; i < NUM_MAX; ++i){
        array[i] = i;
    }
    
    for (i = 4; i < NUM_MAX; i = i + 2) {
        array[i] = 0;
    }
    
    for (i = 6; i < NUM_MAX; i = i + 3) {
        array[i] = 0;
    }
    
    for (i = 10; i < NUM_MAX; i = i + 5) {
        array[i] = 0;
    }
    
    for (i = 14; i < NUM_MAX; i = i + 7) {
        array[i] = 0;
    }
    
    puts("São primos ");
    
    for(i = 2; i < valor; ++i){
        if (array[i] != 0){
            printf("%d ", array[i]);
        }
    }
}


int main(int argc, char** argv) {

    int valor, array[NUM_MAX];

    do{
    puts("Até que valor pretende, não superior a 1000");
    scanf("%d", &valor);

    if ( valor > NUM_MAX) {
        puts("Inseriu um valor superior ao limite!!");
    } else {
        verificarPrimos(array, valor);
    }
    }while(!(valor > 0 && valor < NUM_MAX));
    return (0);
}