/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 14:49
 */

#include <stdio.h>
#include <stdlib.h>

#define NOTA1 0.25
#define NOTA2 0.35
#define NOTA3 0.40

int main(int argc, char** argv) {

    float teste1, teste2, teste3, media;
    
    puts("Qual a nota do primeiro teste?");
    scanf("%f", &teste1);
    
    puts("Qual a nota do segundo teste?");
    scanf("%f", &teste2);
    
    puts("Qual a nota do terceiro teste?");
    scanf("%f", &teste3);
    
    media= (teste1 * NOTA1) + (teste2 * NOTA2) + (teste3 * NOTA3);
    
    printf ("A media dos testes é %.2f valores.\n", media);

    if (media >= 9.5){
        printf("O aluno ficou aprovado!!\n");
    }else{
        printf("O aluno ficou reprovado!!\n");
    }
    return (0);
}

