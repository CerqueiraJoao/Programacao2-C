/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 13:59
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num, antes, depois;
    
    puts("Insira o número! ");
    scanf("%d", &num);
    
    depois = num + 1;
    antes = num - 1;
    
    
    printf("O valor antes do inserido é %d, e o seguinte é %d.", antes, depois);
    return (0);
}

