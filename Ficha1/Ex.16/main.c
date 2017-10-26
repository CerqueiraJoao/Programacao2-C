/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 15 de Outubro de 2017, 17:14
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float taxa;
    double valor, saldo;
    
    puts("Qual foi o valor depositado em €?");
    scanf("%lf", &saldo);
    
    puts("Qual é a taxa de juro em %?");
    scanf("%f", &taxa);
    
    valor = saldo * (taxa / 100);
    saldo += valor;
     
    printf("O valor dos juros do 1º trimestre foi de %.2f€.\n", valor);
    printf("O saldo do 1º trimestre foi de %.2lf€.\n", saldo);
    
    valor = saldo * (taxa / 100);
    saldo += valor;
     
    printf("O valor dos juros do 2º trimestre foi de %.2f€.\n", valor);
    printf("O saldo do 2º trimestre foi de %.2lf€.\n", saldo);
    
    valor = saldo * (taxa / 100);
    saldo += valor;
     
    printf("O valor dos juros do 3º trimestre foi de %.2f€.\n", valor);
    printf("O saldo do 3º trimestre foi de %.2lf€.\n", saldo);
    
    valor = saldo * (taxa / 100);
    saldo += valor;
     
    printf("O valor dos juros do 4º trimestre foi de %.2f€.\n", valor);
    printf("O saldo do 4º trimestre foi de %.2lf€.\n", saldo);
    
    
    return (0);
}

