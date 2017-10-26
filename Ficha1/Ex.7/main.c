/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 14:16
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int kms;
    float tempo;
    
    puts("Diga a distância a realizar ");
    scanf("%d", &kms);
    
    tempo= (float)kms / 300000;
    
    printf("A realizar essa distância demora %f segundos-", tempo);
    return (0);
}

