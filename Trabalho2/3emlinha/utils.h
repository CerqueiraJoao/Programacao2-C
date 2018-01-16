/* 
 * File:   utils.h
 * Author: joaod
 *
 * Created on 11 de Janeiro de 2018, 10:16
 */

#ifndef UTILS_H
#define UTILS_H

#define MAX_MATRIZ 5 //Tamanho da matriz 9x9
#define MAX_JOGADORES 2 //Quantidade de jogadores maxima
#define VALOR_INICIAL '-' //Constante na matriz
#define MAX_NOME 30
#define MAX_TOKEN 1
#define TOKEN_PC '0'

typedef struct jogador {
    char nome[MAX_NOME];
    char token;
} Jogador;

void clean_buffer();
void menu();
int lerString(char *string, int max);
void escolher_token_dois_jog(Jogador jog[]);
void escolher_token_um_jog(Jogador jog[]); 
void matriz_inicial(Jogador jog[], int matriz[][MAX_MATRIZ]);
void main_dois_jogadores(Jogador jog[], int matriz[][MAX_MATRIZ]);
void main_um_jogadores(Jogador jog[], int matriz[][MAX_MATRIZ]);
void preencher_matriz(Jogador jog[], int matriz[][MAX_MATRIZ], int linha, int coluna, int k);
void escrever_matriz(int matriz[][MAX_MATRIZ]); 
int confirmar_jogadas(Jogador jog[], int matriz[][MAX_MATRIZ]);
void jogar(Jogador jog[], int matriz[][MAX_MATRIZ]);
void jogar_vs_pc(Jogador jog[], int matriz[][MAX_MATRIZ]);
void pc_jogada(int matriz[][MAX_MATRIZ]);
void preencher_matriz_pc(int matriz[][MAX_MATRIZ], int linha, int coluna);



#endif /* UTILS_H */

