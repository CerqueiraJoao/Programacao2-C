/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 17:45
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int horario, entrada, saida, hora_entrada, min_entrada,  hora_saida, min_saida;
    
    puts("Qual foi a hora de entrada?");
    scanf("%d", &hora_entrada);
    puts("Quais foram os minutos de entrada?");
    scanf("%d", &min_entrada);
    puts("Qual foi a hora de saida?");
    scanf("%d", &hora_saida);
    puts("Quais foram os minutos de saida?");
    scanf("%d", &min_saida);
    
    entrada = (hora_entrada * 3600) + min_entrada;
    saida = (hora_saida * 3600) + min_saida;
    horario = saida - entrada;
    
    if (horario < 0){
        horario = (24 * 3600) + horario;
    }
    
    printf("O funcionário trabalhou %dh:%dmin.", horario / 3600, horario % (3600 / 60));
    return (0);
}

