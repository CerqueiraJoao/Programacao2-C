/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 15:59
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int total;
    float cand1, cand2, cand3, cand4, cand5;
    
    puts("Quantos votos teve o candidato 1?");
    scanf("%f", &cand1);
    
    puts("Quantos votos teve o candidato 2?");
    scanf("%f", &cand2);
    
    puts("Quantos votos teve o candidato 3?");
    scanf("%f", &cand3);
    
    puts("Quantos votos teve o candidato 4?");
    scanf("%f", &cand4);
    
    puts("Quantos votos teve o candidato 5?");
    scanf("%f", &cand5);
    
    total = (cand1 + cand2 + cand3 + cand4 + cand5);
    cand1 = (float)(cand1 / total) * 100;
    cand2 = (float)(cand2 / total) * 100;
    cand3 = (float)(cand3 / total) * 100;
    cand4 = (float)(cand4 / total) * 100;
    cand5 = (float)(cand5 / total) * 100;
    
    printf("Total de votos %d.\n", total);        
    printf("O candidato 1 teve %.2f%% dos votos.\n", cand1);
    printf("O candidato 2 teve %.2f%% dos votos.\n", cand2);
    printf("O candidato 3 teve %.2f%% dos votos.\n", cand3);
    printf("O candidato 4 teve %.2f%% dos votos.\n", cand4);
    printf("O candidato 5 teve %.2f%% dos votos.\n", cand5);
    
    return (0);
}

