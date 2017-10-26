/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 19 de Outubro de 2017, 15:12
 */

#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada(){ char ch; while ((ch = getchar()) != '\n' && ch != EOF); }

int main(int argc, char** argv) {

    char op;
    float num1, num2, resultado;
    
    puts("Insira o primeiro valor");
    scanf("%f", &num1);
    
    puts("Insira o segundo valor");
    scanf("%f", &num2);
    
    limparBufferEntrada();
    
    puts("Qual é a operação aritmética que pretende utilizar? (+, -, *, /)");
    scanf("%c", &op);
    
    switch (op) {
        case '+': printf ("%.2f + %.2f = %.2f", num1, num2, num1 + num2); break;
        case '-': printf ("%.2f - %.2f = %.2f", num1, num2, num1 - num2); break;
        case '*': printf ("%.2f * %.2f = %.2f", num1, num2, num1 * num2); break;
        case '/': printf ("%.2f / %.2f = %.2f", num1, num2, num1 / num2); break;
        default: printf ("Opção incorreta!");
    }
    return (0);
}

