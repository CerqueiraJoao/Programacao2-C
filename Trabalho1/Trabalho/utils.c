#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

char jogador1[10];
char jogador2[10];

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

void escolher_token(char token[]) { //Funçao que permite escolher o token
    int i;

    for (i = 0; i < MAX_TOKEN; ++i) {
        printf("Jogador %d, insira o seu nome ", i + 1);
        if (i == 0) {
            lerString(jogador1, 10);
            printf("Escolha o seu token %s: ", jogador1);
        } else if (i == 1) {
            lerString(jogador2, 10);
            printf("Escolha o seu token %s: ", jogador2);
        }
        scanf("%c", &token[i]);
        clean_buffer();
        if (token[0] == token[1]) {
            printf("Inseriu token iguais, têm que ser diferentes!!");
            clean_buffer();
            --i;
        }
    }
}

//Funçao que imprime a matriz toda com '-'

void matriz_inicial(int matriz[][MAX_MATRIZ]) {
    int i, j;

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            matriz[i][j] = VALOR_INICIAL;
        }
    }
}

//Funçao que imprime a matriz toda com o token de cada jogador na posição escolhida

void matriz_tokens(int matriz[][MAX_MATRIZ], int coluna, int linha, char token[], int jogador) {
    int i, j;

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            matriz[linha][coluna] = token[jogador];
        }
    }
}

//Função que escreve a matriz

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

//Função que verifica as jogadas

int confirmar_jogadas(int matriz[][MAX_MATRIZ], int n_jogadas_1, int n_jogadas_2, int jogador) {
    int i, j;

    //na horizontal
    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ - 2; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) {
                if (jogador == 0) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador1, n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador2, n_jogadas_2);
                    return 1;
                }
            }
        }
    }
    //na vertical
    for (i = 0; i < MAX_MATRIZ - 2; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) {
                if (jogador == 0) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador1, n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador2, n_jogadas_2);
                    return 1;
                }
            }
        }
    }
    //Diagonais
    for (i = 0; i < MAX_MATRIZ - 2; ++i) {
        for (j = 0; j < MAX_MATRIZ - 2; ++j) {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2]) {
                if (jogador == 0) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador1, n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador2, n_jogadas_2);
                    return 1;
                }
            } else if (matriz[i][j + 2] != '-' && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j]) {
                if (jogador == 0) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador1, n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("\nGanhou o %s com %d jogadas!!\n", jogador2, n_jogadas_2);
                    return 1;
                }
            }
        }
    }
    return 0;
}

//Função que permite escolher as posiçoes, desistir, contar jogadas, etc...

void jogar(int matriz[][MAX_MATRIZ], char token[MAX_TOKEN]) {
    int linha, coluna = 0, c = 0, n_jogadas_1 = 0, n_jogadas_2 = 0, i = 0, vit = 0;

    while (1) {
        printf("\nJogador %d \n", i + 1);
        printf("Pode desistir a qualquer momento inserindo a coluna Z linha 0!!");
        
        if (i == 0) {
            printf("\nIntroduza a Coluna %s (Letras Maisculas)", jogador1);
        } else if (i == 1) {
            printf("\nIntroduza a Coluna %s (Letras Maisculas)", jogador2);
        }
        scanf("%c", &coluna);
        clean_buffer();
        c = (coluna - 65);
        
        if (i == 0) {
            printf("\nIntroduza a Linha %s ", jogador1);
        } else if (i == 1) {
            printf("\nIntroduza a Linha %s ", jogador2);
        }
        scanf("%d", &linha);
        linha = linha - 1;
        clean_buffer();
        
        if (c == 25 && linha == -1) {
            if (i == 0) {
                printf("\nO %s desistiu, FRACO!!\n", jogador1);
            } else if (i == 1) {
                printf("\nO  %s desistiu, FRACO!!\n", jogador2);
            }
            break;
        }
        
        if (c >= 0 && c < MAX_MATRIZ) {
            if (linha >= 0 && linha < MAX_MATRIZ) {
                if (matriz[linha][c] == VALOR_INICIAL) {
                    matriz_tokens(matriz, c, linha, token, i);
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
       
        if (i == 0) {
            ++n_jogadas_1;
        } else if (i == 1) {
            ++n_jogadas_2;
        }
        
        vit = confirmar_jogadas(matriz, n_jogadas_1, n_jogadas_2, i);
       
        if (vit == 1) {
            break;
        }
        
        if (i == 1) {
            i = -1;
        }
        ++i;
    }
}