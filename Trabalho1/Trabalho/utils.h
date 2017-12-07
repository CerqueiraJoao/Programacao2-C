/* 
 * File:   utils.h
 * Author: joaod
 *
 * Created on 5 de Dezembro de 2017, 15:12
 */

#ifndef UTILS_H
#define UTILS_H

#define MAX_MATRIZ 5 //Tamanho da matriz 9x9
#define MAX_TOKEN 2 //Tamanho tokens
#define VALOR_INICIAL '-' //Constante na matriz

void clean_buffer();
int lerString(char *string, int max);
void escolher_token(char token[]);
void matriz_inicial(int matriz[][MAX_MATRIZ]);
void escrever_matriz(int matriz[][MAX_MATRIZ]);
void jogar(int matriz[][MAX_MATRIZ], char token[MAX_TOKEN]);
void matriz_tokens(int matriz[][MAX_MATRIZ], int c, int linha, char token[], int jogador);
int confirmar_jogadas(int matriz[][MAX_MATRIZ], int n_jogadas_1, int n_jogadas_2, int jogador);

#endif /* UTILS_H */

