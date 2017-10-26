/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 18:24
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x, y;
    
    puts ("Qual é o valor de X?");
    scanf("%d", &x);
    
    puts ("Qual é o valor de Y?");
    scanf("%d", &y);
    
    if (x == 0 && y == 0){
            printf("Está na origem. ");
            printf("Coordenadas: (%d,%d)", x ,y);
        }
    if (x == 0 && y > 0){
            printf("Está sobre o eixo X. ");
            printf("Coordenadas: (%d,%d)", x ,y);
        }
    if (x > 0 && y == 0){
            printf("Está sobre o eixo Y. ");
            printf("Coordenadas: (%d,%d)", x ,y);
        }
    
    if (x > 0 && y > 0){
        printf ("Pertence ao 1º Quandrante! "); 
        printf("Coordenadas: (%d,%d)", x ,y);
    }else if (x < 0 && y > 0){
        printf ("Pertence ao 2º Quandrante! ");
        printf("Coordenadas: (%d,%d)", x ,y);
    }else if (x < 0 && y < 0){
        printf ("Pertence ao 3º Quandrante! ");
        printf("Coordenadas: (%d,%d)", x ,y);
    }else if (x > 0 && y < 0){
        printf ("Pertence ao 4º Quandrante! ");
        printf("Coordenadas: (%d,%d)", x ,y);
    }
    return (0);
}

