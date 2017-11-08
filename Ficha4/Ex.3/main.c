/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 7 de Novembro de 2017, 18:33
 */

#include <stdio.h>
#include <stdlib.h>
#define EPD 1.16042
#define DPE 0.86166

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

double lerDouble() {
    double montante;
    puts("Qual é o montante que quer converter?");
    scanf("%lf", &montante);
    return montante;
}

char lerChar() {
    char op;
    puts("Para que moeda pretende converter (E-Euro, D-Dolar)");
    limparBufferEntrada();
    scanf("%c", &op);
    limparBufferEntrada();
    return op;
}

void resultado(double montante, char op) {
    if (op == 'D' || op == 'd') {
        printf("Valor final %.2lf $", montante * EPD);
    }

    if (op == 'E' || op == 'e') {
        printf("Valor final %.2lf €", montante * DPE);
    }
}

int main(int argc, char** argv) {

    double montante;
    char op;

    montante = lerDouble();
    op = lerChar();
    resultado(montante, op);

    return (0);
}