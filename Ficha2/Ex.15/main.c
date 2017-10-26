/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 11:10
 */

#include <stdio.h>
#include <stdlib.h>
#define distancia 130

int main(int argc, char** argv) {

    int viagem;
    float media;
    puts ("Em quanto tempo pretende fazer a viagem (Minutos)");
    scanf("%d", &viagem);
    
    media = (float)distancia / (viagem / 60);
    printf("%.2f", media);
    return (0);
}

