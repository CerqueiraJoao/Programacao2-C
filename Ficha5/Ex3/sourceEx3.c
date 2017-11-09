#include <stdio.h>
#include "headerEx3.h"

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

char lerCaracter() {
    int i;
    char vetor[TAM_ARRAY];

    for (i = 1; i <= TAM_ARRAY; ++i) {
        puts("Indique qual o caracter?");
        vetor[i] = getchar();
        limparBufferEntrada();
    }
    verificarCaracter(vetor);
}

void verificarCaracter(char vetor[]){
    int i, contar = 0;
    char verifica;
    
    puts("\nQual é o caracter que pretende verificar?");
    scanf("%c", &verifica);
    printf("\n");
    limparBufferEntrada();
    
    for (i = 1;i <= TAM_ARRAY; ++i){
        if (verifica == vetor[i]){
            ++contar; 
            printf("Está na posição ");
            printf("%d.\n", i);
        } 
    }
    printf("\nExistem %d caracteres (%c) registados!", contar, verifica);
}