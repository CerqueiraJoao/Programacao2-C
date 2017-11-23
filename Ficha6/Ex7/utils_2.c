#include <stdio.h>
#include <string.h>
#include "utils.h"

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

char lerChar(char carater){
    puts("Qual é o carater para verificar?");
    scanf("%c", &carater);
    return carater;
}

void countChar(char a[], char carater){
    int i, contar = 0;
    
    for (i = 0; i < MAX_STRING; ++i){
        if (a[i] == carater){
            ++contar;
        }
    }
    printf("Inseriu a letra '%c' %d vezes!", carater, contar);
}

