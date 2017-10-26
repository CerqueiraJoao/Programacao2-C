/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 19:21
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    double saldo, tipo, valor;
    
    puts ("Introduza o seu saldo bancário!");
    scanf("%lf", &saldo);
    
    puts("Insira um montante positivo se pretende creditar e um montante negativo se pretende debitar. (Ex. 100 (creditar) -150 (debitar))");
    scanf("%lf", &tipo);
    
    if (tipo > 0 ){
        valor = saldo + tipo;
        if(valor > saldo){
          printf ("Operação realizável!\n"); 
          printf ("O saldo após o crédito é %.2lf€!", valor);
        }else {
          printf ("Operação impossível de realizar!\n");  
        }
    }
    
    if (tipo < 0 ){
        valor = saldo + tipo;
        if(valor < 0){
          printf ("Operação impossível de realizar!\n");   
        }else if(valor < saldo){
          printf ("Operação realizável!\n"); 
          printf ("O saldo após o débito é %.2lf€!", valor);
        }else{
          printf ("Operação impossível de realizar!\n");  
        }
    }
    
    
    if (tipo == 0){
        printf("O saldo assim mantém-se o mesmo! Cerca de %.2lf€", saldo);
    }

    return (0);
}

