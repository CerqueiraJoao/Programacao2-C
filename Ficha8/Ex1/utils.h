/* 
 * File:   utils.h
 * Author: joaod
 *
 * Created on 4 de Janeiro de 2018, 11:11
 */

#ifndef UTILS_H
#define UTILS_H

#define MAX_ALUNOS 2

typedef struct data {
    int dia;
    int mes;
    int ano;
} DataNasc;

typedef struct aluno {
    char nome[30];
    int num;
    DataNasc d_nasc;
} Alunos;

void clean_buffer();

#endif 

