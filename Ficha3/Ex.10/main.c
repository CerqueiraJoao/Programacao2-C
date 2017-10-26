/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 18:17
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

     int i, j;
     
        for (i = 1; i <= 10; i = i + 1){
           for (j = 1; j <= 10; j = j + 1){
               printf("%2d x %2d = %3d\n", i, j, i * j);
            }
        printf("\n");
        }

    return (0);
}

