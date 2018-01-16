#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int possiv_jogadas = MAX_MATRIZ * MAX_MATRIZ;

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

void menu() {
    printf("1: 2 Jogadores\n2: 1 Jogador\n3: Resultados\n4: Sair\n");
}

void main_dois_jogadores(Jogador jog[], int matriz[][MAX_MATRIZ]) {
    escolher_token_dois_jog(jog);
    matriz_inicial(jog, matriz);
    escrever_matriz(matriz);
    jogar(jog, matriz);
}

void main_um_jogadores(Jogador jog[], int matriz[][MAX_MATRIZ]) {
    escolher_token_um_jog(jog);
    matriz_inicial(jog, matriz);
    escrever_matriz(matriz);
    jogar_vs_pc(jog, matriz);
}

void escolher_token_um_jog(Jogador jog[]) {
    int i = 0;

    clean_buffer();
    printf("Jogador %d, insira o seu nome ", i + 1);
    lerString(jog[i].nome, MAX_NOME);
    printf("Escolha o seu token %s: ", jog[i].nome);
    scanf("%c", &jog[i].token);
    printf("%s o seu token é: %c \n", jog[i].nome, jog[i].token);
}

void escolher_token_dois_jog(Jogador jog[]) { //Funçao que permite escolher o token
    int i;

    clean_buffer();
    for (i = 0; i < MAX_JOGADORES; ++i) {
        printf("Jogador %d, insira o seu nome ", i + 1);
        lerString(jog[i].nome, MAX_NOME);

        if (strcmp(jog[i].nome, jog[i - 1].nome) == 0 & i == 1) {
            printf("Nomes iguais!\n");
            --i;
            continue;
        }

        printf("Escolha o seu token %s: ", jog[i].nome);
        scanf("%c", &jog[i].token);
        printf("%s o seu token é: %c \n", jog[i].nome, jog[i].token);

        if (jog[i].token == jog[i - 1].token) {
            printf("Tokens iguais!\n");
            --i;
        }
        clean_buffer();
    }
}

void matriz_inicial(Jogador jog[], int matriz[][MAX_MATRIZ]) {
    int i, j;

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            matriz[i][j] = VALOR_INICIAL;
        }
    }
}

void preencher_matriz(Jogador jog[], int matriz[][MAX_MATRIZ], int linha, int coluna, int k) {
    int i, j;

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            if (matriz[i][j] == VALOR_INICIAL) {
                matriz[linha][coluna] = jog[k].token;
            }
        }
    }
}

void preencher_matriz_pc(int matriz[][MAX_MATRIZ], int linha, int coluna) {
    int i, j;

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            if (matriz[i][j] == VALOR_INICIAL) {
                matriz[linha][coluna] = TOKEN_PC;
            }
        }
    }
}

void escrever_matriz(int matriz[][MAX_MATRIZ]) {
    int i, j, letras = 65;

    puts("");
    printf(" ");
    printf("|");
    for (i = 0; i < MAX_MATRIZ; ++i) {
        printf("%c|", letras);
        ++letras;
    }
    puts(" ");
    for (i = 0; i < MAX_MATRIZ; ++i) {
        printf("%d", i + 1);
        printf("|");
        for (j = 0; j < MAX_MATRIZ; ++j) {
            printf("%c", matriz[i][j]);
            printf("|");
        }
        puts(" ");
    }
}

int confirmar_jogadas(Jogador jog[], int matriz[][MAX_MATRIZ]) {
    int i, j, k;

    //na horizontal
    for (k = 0; k < MAX_JOGADORES; ++k) {

        for (i = 0; i < MAX_MATRIZ; ++i) {
            for (j = 0; j < MAX_MATRIZ - 2; ++j) {
                if (matriz[i][j] != VALOR_INICIAL && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) {
                    printf("\nGanhou o %s!!\n", jog[k].nome);
                    return 1;
                }
            }
        }

        //na vertical
        for (i = 0; i < MAX_MATRIZ - 2; ++i) {
            for (j = 0; j < MAX_MATRIZ; ++j) {
                if (matriz[i][j] != VALOR_INICIAL && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) {
                    printf("\nGanhou o %s!!\n", jog[k].nome);
                    return 1;
                }
            }
        }
        //Diagonais
        for (i = 0; i < MAX_MATRIZ - 2; ++i) {
            for (j = 0; j < MAX_MATRIZ - 2; ++j) {
                if (matriz[i][j] != VALOR_INICIAL && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2]) {
                    printf("\nGanhou o %s!!\n", jog[k].nome);
                    return 1;
                } else if (matriz[i][j + 2] != VALOR_INICIAL && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j]) {
                    printf("\nGanhou o %s!!\n", jog[k].nome);
                    return 1;
                }
            }
        }
    }
    return 0;
}

void jogar(Jogador jog[], int matriz[][MAX_MATRIZ]) {
    int linha = 0, coluna = 0, col = 0, i = 0, vitoria = 0, jogadas = 0;

    do {
        printf("\n%s a Jogar \n", jog[i].nome);
        printf("Pode desistir a qualquer momento inserindo a coluna Z linha 0!!");

        printf("\nIntroduza a Coluna %s (Letras Maisculas)", jog[i].nome);
        scanf("%c", &coluna);
        clean_buffer();

        col = (coluna - 65);

        printf("\nIntroduza a Linha %s ", jog[i].nome);
        scanf("%d", &linha);

        linha = linha - 1;
        clean_buffer();

        if (col == 25 && linha == -1) {
            printf("\nO  %s desistiu, FRACO!!\n", jog[i].nome);
            break;
        }

        if (col >= 0 && col < MAX_MATRIZ) {
            if (linha >= 0 && linha < MAX_MATRIZ) {
                if (matriz[linha][col] == VALOR_INICIAL) {
                    preencher_matriz(jog, matriz, linha, col, i);
                    ++jogadas;
                } else {
                    printf("Posição Ocupada!! Insira novamente!\n");
                    --i;
                }
            } else {
                printf("Posição Inválida!! Insira novamente!\n");
                --i;
            }
        } else {
            printf("Posição Inválida!! Insira novamente!\n");
            --i;
        }

        escrever_matriz(matriz);

        vitoria = confirmar_jogadas(jog, matriz);

        if (vitoria == 1) {
            break;
        }

        if (i == 1) {
            i = -1;
        }
        ++i;
    } while (jogadas != possiv_jogadas);
}

void pc_jogada(int matriz[][MAX_MATRIZ]) {
    int i, j, linha, coluna, k = 1;

    printf("O meu token é '%c'", TOKEN_PC);

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ - 2; ++j) {
            if (matriz[i][j] != VALOR_INICIAL && matriz[i][j] == matriz[i][j + 1] && matriz[i][j + 2] == VALOR_INICIAL) {
                linha = i;
                coluna = j + 2;
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            }
        }
    }

    //na vertical
    for (i = 0; i < MAX_MATRIZ - 2; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            if (matriz[i][j] != VALOR_INICIAL && matriz[i][j] == matriz[i + 1][j] && matriz[i + 2][j] == VALOR_INICIAL) {
                linha = i + 2;
                coluna = j;
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            }
        }
    }
    //Diagonais
    for (i = 0; i < MAX_MATRIZ - 2; ++i) {
        for (j = 0; j < MAX_MATRIZ - 2; ++j) {
            if (matriz[i][j] != VALOR_INICIAL && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i + 2][j + 2] == VALOR_INICIAL) {
                linha = i + 2;
                coluna = j + 2;
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            } else if (matriz[i][j + 2] != VALOR_INICIAL && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i + 2][j] == VALOR_INICIAL) {
                linha = i + 2;
                coluna = j;
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            }
        }
    }

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            if (matriz[MAX_MATRIZ / 2][MAX_MATRIZ / 2] == VALOR_INICIAL) {
                linha = MAX_MATRIZ / 2;
                coluna = MAX_MATRIZ / 2;
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            } else if (matriz[i][j] == VALOR_INICIAL) {
                linha = i;
                coluna = j;
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            }else{
                linha = rand();
                coluna = rand();
                preencher_matriz_pc(matriz, linha, coluna);
                return;
            }
        }
    }


}

void jogar_vs_pc(Jogador jog[], int matriz[][MAX_MATRIZ]) {
    int linha = 0, coluna = 0, col = 0, i = 0, vitoria = 0, jogadas = 0;

    do {
        pc_jogada(matriz);
        escrever_matriz(matriz);
        vitoria = confirmar_jogadas(jog, matriz);

        if (vitoria == 1) {
            break;
        }

        printf("\n%s a Jogar \n", jog[i].nome);
        printf("Pode desistir a qualquer momento inserindo a coluna Z linha 0!!");

        clean_buffer();
        printf("\nIntroduza a Coluna %s (Letras Maisculas)", jog[i].nome);
        scanf("%c", &coluna);

        col = (coluna - 65);

        printf("\nIntroduza a Linha %s ", jog[i].nome);
        scanf("%d", &linha);

        linha = linha - 1;

        if (col == 25 && linha == -1) {
            printf("\nO  %s desistiu, FRACO!!\n", jog[i].nome);
            break;
        }

        if (col >= 0 && col < MAX_MATRIZ) {
            if (linha >= 0 && linha < MAX_MATRIZ) {
                if (matriz[linha][col] == VALOR_INICIAL) {
                    preencher_matriz(jog, matriz, linha, col, 0);
                    ++jogadas;
                } else {
                    printf("Posição Ocupada!! Insira novamente!\n");
                    continue;
                }
            } else {
                printf("Posição Inválida1!! Insira novamente!\n");
                continue;
            }
        } else {
            printf("Posição Inválida2!! Insira novamente!\n");
            continue;
        }

        escrever_matriz(matriz);
        vitoria = confirmar_jogadas(jog, matriz);

        if (vitoria == 1) {
            break;
        }


    } while (jogadas != possiv_jogadas);
}

