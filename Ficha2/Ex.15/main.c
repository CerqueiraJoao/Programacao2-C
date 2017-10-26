/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 11:10
 */

#include <stdio.h>
#include <stdlib.h>
#define distancia 130
#define litros 4

int main(int argc, char** argv) {

    int viagem;
    float media, autonomia, combustivel;
    puts ("Em quanto tempo pretende fazer a viagem (Minutos)");
    scanf("%d", &viagem);
    
    media = distancia / (viagem / 60.0);
    
    if (media <= 60){
        combustivel = 5; 
        }else if (media > 60 && media <= 120){
        combustivel = 6;      
        }else if (media > 120){
        combustivel = 7;  
        }

        autonomia = (litros * 100) / combustivel;
        if (autonomia >= 79 && autonomia < 130){
            printf ("Tem que abastecer, obrigatóriamente, ao km 79.\n");
        }else if (autonomia >= 60 && autonomia < 70){
            printf ("Tem que abastecer, obrigatóriamente, ao km 60.\n");
        }else if (autonomia >= 70 && autonomia < 79){
            printf ("Tem que abastecer, obrigatóriamente, ao km 70.\n");
        }
        printf("Com o combustivel atual faz apenas %.2fkm.\n", autonomia);
        printf("A viagem será efetuada a uma velocidade média de %.2fkm/h", media);
 
        return (0);
}

