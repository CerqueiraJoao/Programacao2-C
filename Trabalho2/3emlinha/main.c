/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 11 de Janeiro de 2018, 9:57
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char** argv) {
    Jogador jog[MAX_JOGADORES];

    int op, matriz[MAX_MATRIZ][MAX_MATRIZ], contador = 0;

    contador = ler_contador();

    do {
        menu();
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch (op) {
            case 1: main_dois_jogadores(jog, matriz);
                contador = contador + 2;
                contar_jogadores(contador);
                guardar_ficheiro(jog,contador);
                break;
            case 2: main_um_jogadores(jog, matriz);
                contador = contador + 2;
                contar_jogadores(contador);
                guardar_ficheiro(jog,contador);
                break;
            case 3: listar_resultados(jog, contador);
                break;
            case 4: break;
            default: printf("Opção Incorreta!\n");
        }
    } while (op != 4);

    return (0);
}

