#include <stdio.h>
#include "headerEx4.h"

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

double insereValor(){
    int i, total = 0;
    double numero, numeros[NUM_MAX];

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Insira um valor");
        scanf("%lf", &numero);
        limparBufferEntrada();

        if (numero != -1) {
            numeros[i] = numero;
            ++total;
        } else {
            break;
        }
    }
    somarValores(numeros);
    return total;
}

double somarValores(double numeros[]){
    int i;
    double soma_num;
    for (i = 0; i < NUM_MAX; ++i) {
        soma_num += numeros[i];
    }
    return soma_num;
}

double media(int total, double soma_num){
    double media;
    
    media = (float)(soma_num / total);
    
    printf("Media: %.2f", media);
}
