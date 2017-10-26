/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 14:55
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float valor, horas, minutos, segundos;
    
    puts("Indique o valor em segundos");
    scanf("%f", &valor);
    
    segundos = valor;
    minutos = segundos / 60;
    horas = minutos / 60;
    
    printf("O numero inserido corresponde a %.2f horas, %.2f minutos e %.0f segundos.", horas, minutos, segundos);
    return (0);
}

