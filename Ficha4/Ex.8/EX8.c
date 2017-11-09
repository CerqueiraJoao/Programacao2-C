/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "headerEx8.h"

int lerInteiro(int minimo, int maximo) { 
    int nota;
    while (1) {
        puts("Qual foi a nota obtida?");
        scanf("%d", &nota);
        if (nota >= minimo && nota <= maximo) {
            break;
        } else {
            printf("Introduziu uma nota inválida!!\n");
        }
    }
    return nota;
}