/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 18:05
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
       
    int i,num,res;
    
    puts("Qual é a tabuada que pretende?");
    scanf("%d", &num);
    
    for (i=1; i<=10; i++){
       printf("%d x %d = %d\n", num, i, num * i);
   }
            
       
    
    return (0);
}

