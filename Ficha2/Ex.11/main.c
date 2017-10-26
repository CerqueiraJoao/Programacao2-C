/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 18:15
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x, y;
    
    puts ("Qual é o valor de X?");
    scanf("%d", &x);
    
    if (x < 1){
        y = x;
        printf ("O valor de Y é %d.", y);
    }else if (x == 1){
        y = 0;
        printf ("O valor de Y é %d.", y);
    }else{
        y = 2 * x;
        printf ("O valor de Y é %d.", y);
    }
    return (0);
}

