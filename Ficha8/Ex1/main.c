/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 14 de Dezembro de 2017, 12:30
 */

#include <stdio.h>
#include <stdlib.h>

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

void inserir(Alunos a[]) {
    int i, j, n;

    printf("Quantos alunos quer inserir? (Máximo %d)", MAX_ALUNOS);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nome: ");
        scanf("%s", &a[i].nome);
        printf("Numero de Aluno: ");
        scanf("%d", &a[i].num);
        printf("Data de Nascimento (dia, mes, ano): ");
        scanf("%d%d%d", &a[i].d_nasc.dia, &a[i].d_nasc.mes, &a[i].d_nasc.ano);
    }
}

void alterar(Alunos a[]) {

}

void apagar(Alunos a[]) {

}

void consultar(Alunos a[]) {

}

void listar(Alunos a[]) {

}

void menu() {
    printf("1.Inserção\n2.Alteração\n3.Remoção\n4.Consulta aos detalhes de um determinado aluno\n5.Listagem de todos os alunos\n");
}

int main(int argc, char** argv) {
    int op;

    Alunos a[MAX_ALUNOS];
    {
        menu();
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch (op) {
            case 1: inserir(a);
                break;
            case 2: alterar(a);
                break;
            case 3: apagar(a);
                break;
            case 4: consultar(a);
                break;
            case 5: listar(a);
                break;
            default: printf("Opção Incorreta!");
        }
    }

    return (0);
}

