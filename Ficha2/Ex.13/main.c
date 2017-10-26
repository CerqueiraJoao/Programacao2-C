/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 18:46
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int tempo, temp_ideal;
    float temp_atual, dif_temp;
    
    puts("Qual é a temperatura atual?");
    scanf("%f", &temp_atual);
    
    puts("Qual é a temperatura ideal?");
    scanf("%d", &temp_ideal);
    
    if (temp_ideal < temp_atual){
        dif_temp = (float)temp_atual - temp_ideal;   
        printf("Para reduzir até a temperatura ideal são necessários %.0fs", dif_temp * 120);
    }
    
    if (temp_ideal > temp_atual){
        dif_temp = (float)temp_ideal - temp_atual;   
        printf("Para aumentar até a temperatura ideal são necessários %.0fs", dif_temp * 180);
    }
    
    return (0);
}

