/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 14 de Dezembro de 2017, 12:30
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int inserir(Alunos al[], int total_Al) {
    Alunos novo_al;

    printf("Nome: ");
    scanf("%s", &novo_al.nome);
    clean_buffer();
    printf("Numero de Aluno: ");
    scanf("%d", &novo_al.num);
    printf("Data de Nascimento ");
    printf("Dia: ");
    scanf("%d", &novo_al.d_nasc.dia);
    printf("Mes: ");
    scanf("%d", &novo_al.d_nasc.mes);
    printf("Ano: ");
    scanf("%d", &novo_al.d_nasc.ano);
    
    al[total_Al] = novo_al;

    return ++total_Al;
}

void alterar(Alunos al[], int total_Al) {
    int i, num_aluno;
    Alunos novo_al;

    printf("Indique o numero do aluno que pretende alterar\n");
    scanf("%d", &num_aluno);

    for (i = 0; i < total_Al; ++i) {
        if (num_aluno == al[i].num) {
            printf("Vai alterar o %s!\n", al[i].nome);
            printf("Nome: ");
            scanf("%s", &novo_al.nome);
            clean_buffer();
            printf("Numero de Aluno: ");
            scanf("%d", &novo_al.num);
            printf("Data de Nascimento ");
            printf("Dia: ");
            scanf("%d", &novo_al.d_nasc.dia);
            printf("Mes: ");
            scanf("%d", &novo_al.d_nasc.mes);
            printf("Ano: ");
            scanf("%d", &novo_al.d_nasc.ano);

            al[i] = novo_al;
        } else {
            printf("Aluno inexistente!\n");
        }
    }

}

int apagar(Alunos al[], int total_Al) {
    int i, num_aluno;

    printf("Indique o numero do aluno que pretende eliminar\n");
    scanf("%d", &num_aluno);

    for (i = 0; i < total_Al; ++i) {
        if (num_aluno == al[i].num) {
            printf("\nEliminou o %s!\n\n", al[i].nome);
            if (total_Al == 1) {
                return 0;
            } else if ((total_Al - 1) == i) {
                return --total_Al;
            } else {
                al[i] = al[(total_Al - 1)];
                return --total_Al;
            }
        } else {
            printf("Aluno inexistente!\n");
        }
    }

}

void consultar(Alunos al[], int total_Al) {
    int i, num_aluno;

    printf("Indique o numero do aluno que pretende consultar\n");
    scanf("%d", &num_aluno);

    for (i = 0; i < total_Al; ++i) {
        if (num_aluno == al[i].num) {
            printf("\nAluno escolhindo %s\n", al[i].nome);
            printf("Nome: %s \n", al[i].nome);
            printf("Numero: %d \n", al[i].num);
            printf("Data Nascimento: %d/%d/%d\n\n", al[i].d_nasc.dia, al[i].d_nasc.mes, al[i].d_nasc.ano);
        }else{
            printf("Aluno inexistente!\n");
        }
    }
}

void listar(Alunos al[], int total_Al) {
    int i;

    printf("\nLista de Alunos\n");
    for (i = 0; i < total_Al; ++i) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s \n", al[i].nome);
        printf("Numero: %d \n", al[i].num);
        printf("Data Nascimento: %d/%d/%d\n\n", al[i].d_nasc.dia, al[i].d_nasc.mes, al[i].d_nasc.ano);
    }
}

void menu() {
    printf("\n1.Inserção\n2.Alteração\n3.Remoção\n4.Consulta aos detalhes de um determinado aluno\n5.Listagem de todos os alunos\n6.Terminar\n");
}

int main(int argc, char** argv) {
    int op, total_Al = 0;

    Alunos al[MAX_ALUNOS];
    do {
        menu();
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch (op) {
            case 1: total_Al = inserir(al, total_Al);
                break;
            case 2: alterar(al, total_Al);
                break;
            case 3: total_Al = apagar(al, total_Al);
                break;
            case 4: consultar(al, total_Al);
                break;
            case 5: listar(al, total_Al);
                break;
            case 6: break;
            default: printf("Opção Incorreta!\n");
        }
    } while (op != 6);

    return (0);
}

