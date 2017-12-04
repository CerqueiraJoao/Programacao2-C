/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 30 de Novembro de 2017, 14:52
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_MATRIZ 9
#define MAX_TOKEN 2
#define IGUAL '='

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void escolher_token(char token[]) {
    int i;
    char nome_jogador[10];
    
    for (i = 0; i < MAX_TOKEN; ++i) {

        printf("Nome do jogador %d: ", i + 1);
        scanf("%s", &nome_jogador);
        clean_buffer();
        printf("Escolha o seu token %s: ", nome_jogador);
        scanf("%c", &token[i]);
        clean_buffer();
        
/*
        if( token[i] > 2){
            printf("Token demasiado longo, insira apenas uma letra!\n");
            --i;
        }
*/

        if (token[0] == token[1]) {
            printf("Inseriu token iguais, têm que ser diferentes!!");
            clean_buffer();
            --i;
        }
    }
}

void matriz_igual(int matriz[][MAX_MATRIZ]) {
    int i, j;

    for (i = 0; i < MAX_MATRIZ; ++i) {
        for (j = 0; j < MAX_MATRIZ; ++j) {
            matriz[i][j] = IGUAL;
        }
    }
}

void matriz_tokens(int matriz[][MAX_MATRIZ], int c, int linha, char token[], int jogador) {
    int i, j;

    for (i = -1; i < MAX_MATRIZ; ++i) {
        for (j = -1; j < MAX_MATRIZ; ++j) {

            if (jogador == 0) {
                matriz[linha][c] = token[0];
            } else if (jogador == 1) {
                matriz[linha][c] = token[1];
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

int confirmar_jogada(int matriz[][MAX_MATRIZ], int n_jogadas_1, int n_jogadas_2, int jogador) {
    int i, j;

    //na horizontal
    for (i = 0; i < MAX_MATRIZ; i++) {
        for (j = 0; j < MAX_MATRIZ - 2; j++) {
            if (matriz[i][j] != '=' && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) {
                if (jogador == 0) {
                    printf("Ganhou o jogador 1 com %d jogadas!!", n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("Ganhou o jogador 2 com %d jogadas!!", n_jogadas_2);
                    return 1;
                }
            }
        }
    }

    //na vertical
    for (i = 0; i < MAX_MATRIZ - 2; i++) {
        for (j = 0; j < MAX_MATRIZ; j++) {
            if (matriz[i][j] != '=' && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) {
                if (jogador == 0) {
                    printf("Ganhou o jogador 1 com %d jogadas!!", n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("Ganhou o jogador 2 com %d jogadas!!", n_jogadas_2);
                    return 1;
                }
            }
        }
    }

    //Diagonal Esq-Drt
    for (i = 0; i < MAX_MATRIZ - 2; i++) {
        for (j = 0; j < MAX_MATRIZ - 2; j++) {
            if (matriz[i][j] != '=' && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2]) {
                if (jogador == 0) {
                    printf("Ganhou o jogador 1 com %d jogadas!!", n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("Ganhou o jogador 2 com %d jogadas!!", n_jogadas_2);
                    return 1;
                }
            }
        }
    }

    //Diagonal Drt-Esq
    for (i = 0; i < MAX_MATRIZ - 2; i++) {
        for (j = 0; j < MAX_MATRIZ - 2; j++) {
            if (matriz[i][j + 2] != '=' && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j]) {
                if (jogador == 0) {
                    printf("Ganhou o jogador 1 com %d jogadas!!", n_jogadas_1);
                    return 1;
                } else if (jogador == 1) {
                    printf("Ganhou o jogador 2 com %d jogadas!!", n_jogadas_2);
                    return 1;
                }
            }
        }
    }

    return 0;
}

/*
void jogada_possivel( int matriz[][MAX_MATRIZ], int coluna, int linha){
    int i, j, letras = 65;
    
    for( i=0; i < MAX_MATRIZ; ++i){
        if(!(coluna == (letras + i) && linha > 0 && linha < MAX_MATRIZ)){
            printf("Posição Inválida!! Insira novamente!\n");
            jogar();
        }else{
            continue;
        }
    }
}
 */

void jogar(int matriz[][MAX_MATRIZ], char token[MAX_TOKEN]) {
    int linha, coluna = 0, c = 0, n_jogadas_1 = 0, n_jogadas_2 = 0, i, j, letras = 65, vit = 0;

    for (i = 0;; ++i) {
        printf("\nJogador %d ", i + 1);
        printf("Pode desistir a qualquer momento inserindo a coluna Z linha 0!!");
        printf("\nIntroduza a Coluna (Letras Maisculas)");
        scanf("%c", &coluna);
        clean_buffer();
        c = (coluna - 65);
        printf("\nIntroduza a Linha ");
        scanf("%d", &linha);
        linha = linha - 1;
        clean_buffer();

        if ( c == 25 && linha == -1){
            printf("O jogador %d desistiu, FRACO!!", i + 1);
            break;
        }

/*
        if (!(i == 1 && coluna == (letras + i) && linha > 0 && linha < MAX_MATRIZ)) {
            printf("\nPosição Inválida!! Insira novamente!\n");
            --i;
        }
*/
        //jogada_possivel(matriz, c, linha);
        /*
                if (!(linha > 0 && coluna > 65 && matriz[i][j] != '=') && (linha < MAX_MATRIZ && coluna < 73 && matriz[i][j] != '=')) {
                    printf("Posição inválida!!!");
                    --i;
                }
         */

        matriz_tokens(matriz, c, linha, token, i);
        escrever_matriz(matriz);

        if (i == 0) {
            ++n_jogadas_1;
        } else if (i == 1) {
            ++n_jogadas_2;
        }

        vit = confirmar_jogada(matriz, n_jogadas_1, n_jogadas_2, i);

        if (vit == 1) {
            break;
        }

        if (i == 1) {
            i = -1;
        }
    }
}

int main(int argc, char** argv) {

    int matriz[MAX_MATRIZ][MAX_MATRIZ];
    char token[MAX_TOKEN];


    escolher_token(token);
    matriz_igual(matriz);
    escrever_matriz(matriz);
    jogar(matriz, token);

    return (0);
}