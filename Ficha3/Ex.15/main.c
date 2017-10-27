/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 27 de Outubro de 2017, 18:02
 */

#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

int main(int argc, char** argv) {
    
    int idade, est_civil;
    double salario;
    char sexo;
    
    while (1){
        puts("Qual é a idade");
        scanf("%d", &idade);
        
        if(idade <= 0){
            break;
        }
    }   
    
    while (1){
        puts("Qual o sexo (M ou F)");
        scanf("%ch", &sexo);
        
        if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f'){
            printf("Sexo valido!");
            //limparBufferEntrada();
        }else{
            printf("Sexo invalido!");           
        }
    }
                
        
        puts("Estado civil (1-Solteiro, 2-Casado, 3-Divorciado, 4-Viuvo");
        scanf("%d", &est_civil);
        
        puts("Qual é o seu salário");
        scanf("%lf", &salario);
        
        
        
        
    

    return (0);
}

