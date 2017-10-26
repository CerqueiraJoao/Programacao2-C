/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 15 de Outubro de 2017, 16:34
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int  hora_partida, min_partida,  hora_chegada, min_chegada, viagem, partida, chegada;
    float media, consumo_medio, distancia, combustivel;
    
    puts("Qual foi a hora de partida?");
    scanf("%d", &hora_partida);
    puts("E os minutos de partida?");
    scanf("%d", &min_partida);
    puts("Qual foi a hora de chegada?");
    scanf("%d", &hora_chegada);
    puts("E os minutos de chegada?");
    scanf("%d", &min_chegada);
    puts("Qual foi a distância percorrida?");
    scanf("%f", &distancia);
    puts("Qual foi a quantidade de combustivel gasto?");
    scanf("%f", &combustivel);
    
    partida = (hora_partida * 3600) + (min_partida * 60);
    chegada = (hora_chegada * 3600) + (min_chegada * 60);
    viagem = chegada - partida;
    consumo_medio = (combustivel * 100) / distancia;
    
    if (viagem < 0){
        viagem = (24 * 3600) + viagem;
    }
    media = (float)distancia / (viagem / 3600);
    
    printf("O tempo da viagem foi %dh:%dm.\n", viagem / 3600, viagem % (3600) / 60);
    printf("A velocidade média foi de %.2fkm/h.\n", media);
    printf("O consumo medio foi de %.2fL/100kms.\n", consumo_medio);
    return (0);
}

