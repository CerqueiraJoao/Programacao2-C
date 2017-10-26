/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int num, i = 0;
    
    puts ("Numero ");
    scanf("%d", &num);
    
    for (i = num - 1; i >= num - 5; --i){
        printf("%d ", i);
    }
    printf("(%d) ", num);
    for (i = num + 1; i <= num + 5; ++i){
        printf("%d ", i);
    }
    
    return (0);
}

