/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 27 de Outubro de 2017, 16:30
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int nota;
    
    while(1){
    
        puts("Qual foi a nota obtida?");
        scanf ("%d", &nota);

        if(nota >= 0 && nota <= 20){
            if(nota > 9.5){
                printf("Com a nota %d, obtem aprovação!!", nota);    
            }else{
                printf("Com a nota %d, não obtem aprovação!!", nota);
            }
            break;
        }else{
            puts ("O nota inserida não é válida!!");
        }
    }

    return (0);
}

