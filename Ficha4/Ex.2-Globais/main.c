/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 7 de Novembro de 2017, 18:07
 */

#include <stdio.h>
#include <stdlib.h>

char op;
float resultado, num1, num2;

void limparBufferEntrada(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

long somar(){
    return num1 + num2;
}

long subtrair(){
    return num1 - num2;
}

long multiplicar(){
    return num1 * num2;
}

long dividir(){
    return num1 / num2;
}

int main(int argc, char** argv) {
    
    puts("Insira o primeiro num");
    scanf("%f", &num1);
    
    puts("Insira o segundo num");
    scanf("%f", &num2);
    
    limparBufferEntrada();
            
    puts("Qual a operação desejada? (+,-,*,/)");
    scanf("%c", &op);
    
    switch (op) {
        case '+': resultado = somar(); break;
        case '-': resultado = subtrair(); break;
        case '*': resultado = multiplicar(); break;
        case '/': resultado = dividir(); break;
        default: printf ("Opção incorreta!");
    }
    
    printf ("O resultado da operação é %.2f", resultado);
    return (0);
}

