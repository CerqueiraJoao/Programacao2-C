/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 7 de Novembro de 2017, 18:25
 */

#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF); 
}

long somar(float num1, float num2){
    return num1 + num2;
}

long subtrair(float num1, float num2){
    return num1 - num2;
}

long multiplicar(float num1, float num2){
    return num1 * num2;
}

long dividir(float num1, float num2){
    return num1 / num2;
}

int main(int argc, char** argv) {
    
    char op;
    float num1, num2, resultado;
    
    puts("Insira o primeiro num");
    scanf("%f", &num1);
    
    puts("Insira o segundo num");
    scanf("%f", &num2);
    
    limparBufferEntrada();
            
    puts("Qual a operação desejada? (+,-,*,/)");
    scanf("%c", &op);
    
    switch (op) {
        case '+': resultado = somar(num1, num2); break;
        case '-': resultado = subtrair(num1, num2); break;
        case '*': resultado = multiplicar(num1, num2); break;
        case '/': resultado = dividir(num1, num2); break;
        default: printf ("Opção incorreta!");
    }
    
    printf ("O resultado da operação é %.2f", resultado);
    return (0);
}