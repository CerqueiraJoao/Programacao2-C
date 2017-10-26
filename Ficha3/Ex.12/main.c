/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 18:27
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int soma, total, num;

    do{
        printf("Insira um numero (-1 para efetuar a media): ");
        scanf("%d", &num);
        soma += num;
        total++;
    }
    while (num != -1);
    
    printf("A media dos valores inseridos é %.2lf\n", (float)soma / total);

    return (0);
}

