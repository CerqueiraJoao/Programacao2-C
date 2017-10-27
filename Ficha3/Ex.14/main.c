/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 27 de Outubro de 2017, 16:44
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int valor, i;
    int contador=0;
    int cand[4], nulos=0, brancos=0;
    
    for (i=1; i<=4; i++){
        cand[i]=0;
    }
    
    while(1){
        printf("Introduza um Valor: ");
        scanf("%d", &valor);
        
        if (valor == -1) {
            break;
        }
        if (valor >=1 && valor <=4){
            if( valor == 1 ){
                cand[1]+=1;
            }
            else if( valor == 2 ){
                cand[2]+=1;
            }
            else if( valor == 3 ){
                cand[3]+=1;
            }
            else{
                cand[4]+=1;
            }
            contador++;
        }
        else if (valor==0 || valor == 9) {
            if (valor==0){
                brancos+=1;
            }
            else {
                nulos+=1;
            }
            contador++;
        }
        else {
            printf("Valor Invalido.");
        }
    }
    
    printf("Numero Total de Votos: %d\n", contador);
    
    for (i=1; i<=4; i++){
        printf("O candidato %d teve %d votos.\n",i ,cand[i]);
    }
    
    printf("Existem %d votos brancos.\n", brancos);
    printf("Existem %d votos nulos.\n", nulos);
    
    for (i=1; i<=4; i++){
        printf("O candidato %d teve %.2lf votos.\n",i , (cand[i]/(float)contador)*100);
    }
    
    printf("Existem %.2lf votos brancos.\n", (brancos/(float)contador)*100);
    printf("Existem %.2lf votos nulos.\n", (nulos/(float)contador)*100);

    return (0);
}

