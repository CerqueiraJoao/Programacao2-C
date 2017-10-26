/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 14:42
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int num1, num2, num3, num4, num5;
    float media;
    
    puts("Diga o valor do num1");
    scanf("%d", &num1);
    
    puts("Diga o valor do num2");
    scanf("%d", &num2);
    
    puts("Diga o valor do num3");
    scanf("%d", &num3);
    
    puts("Diga o valor do num4");
    scanf("%d", &num4);
    
    puts("Diga o valor do num5");
    scanf("%d", &num5);
    
    media= (float)(num1 + num2 + num3 + num4 + num5) / 5;
    
    printf("A media dos 5 valores inseridos é %.2f.", media);
    return (0);
}

