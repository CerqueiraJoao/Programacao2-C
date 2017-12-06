/* 
 * File:   utils.h
 * Author: joaod
 *
 * Created on 5 de Dezembro de 2017, 15:12
 */

#ifndef UTILS_H
#define UTILS_H

#define MAX_MATRIZ 9 //Tamanho da matriz 9x9
#define MAX_TOKEN 2 //Tamanho tokens
#define IGUAL '=' //Constante na matriz

void clean_buffer();
void escolher_token(char token[]);
void matriz_igual(int matriz[][MAX_MATRIZ]);
void escrever_matriz(int matriz[][MAX_MATRIZ]);
void jogar(int matriz[][MAX_MATRIZ], char token[MAX_TOKEN]);
void matriz_tokens(int matriz[][MAX_MATRIZ], int c, int linha, char token[], int jogador);
int confirmar_jogadas(int matriz[][MAX_MATRIZ], int n_jogadas_1, int n_jogadas_2, int jogador);

#endif /* UTILS_H */

