/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 14:30
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num;
    
    while (num <= 300){
        if(num % 2 == 0){
            printf("%d ", num);
        }
        ++num;
    }
    
    return (0);
}

