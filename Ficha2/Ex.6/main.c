/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 17:20
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int hora, minutos;
    
    puts("Insira a hora (Formato 24h)");
    scanf("%d", &hora);
    puts("Insira os minutos");
    scanf("%d", &minutos);
    
    if (hora == 0){
        hora = 12;
        printf("A hora é %d:%dAM", hora, minutos);
    }else if (hora > 12){
        hora = hora - 12;
        printf("A hora é %d:%dPM", hora, minutos);
    }else if (hora == 12){
        printf("A hora é %d:%dPM", hora, minutos);
    }else{
       printf("A hora é %d:%dAM", hora, minutos); 
    }
    
    return (0);
}

