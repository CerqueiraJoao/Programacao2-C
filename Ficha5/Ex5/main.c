/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 10 de Novembro de 2017, 17:15
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 10

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void conteudo(double numero[]){
    int i;
    
    puts("Conteudo!");
    
    for (i = 0; i < NUM_MAX; ++i){
        printf("%.1lf ", numero[i]);
    }   
}

void dobro(double numero[]){
    int i;
    
    puts("\nDobro!");
    
    for (i = 0; i < NUM_MAX; ++i){
        printf("%.1lf ", numero[i] * 2);
    }   
}

void somatorio(double numero[]){
    int i, soma_num = 0;
    
    puts("\nSomatório!");
    
    for (i = 0; i < NUM_MAX; ++i){
        soma_num += numero[i];
    }   
    printf("%d", soma_num);
    
    //Media
    printf("\nMédia\n");
    printf("%.2f ", (float)(soma_num / NUM_MAX));
}

void maior(double numero[]){
    int i, num = numero[0];
    
    puts("\nMaior!");
    
    for (i = 0; i < NUM_MAX; ++i){
        if(num < numero[i]){
            num = numero[i];
        }
    }   
    printf("%d", num);
}

void menor(double numero[]){
    int i, num = numero[0];
    
    puts("\nMenor!");
    
    for (i = 0; i < NUM_MAX; ++i){
        if(num > numero[i]){
            num = numero[i];
        }
    }   
    printf("%d", num);
}

int main(int argc, char** argv) {

    int i;
    double numero[NUM_MAX];

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Insira um valor");
        scanf("%lf", &numero[i]);
        limparBufferEntrada();
    }

    conteudo(numero);
    dobro(numero);
    somatorio(numero);
    maior(numero);
    menor(numero);
    
    return (0);
}

