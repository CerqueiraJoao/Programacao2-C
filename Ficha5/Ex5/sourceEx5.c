#include <stdio.h>
#include "headerEx5.h"

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
