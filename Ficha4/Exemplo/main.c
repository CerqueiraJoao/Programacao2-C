/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 2 de Novembro de 2017, 13:45
 */

#include <stdio.h>
#include <stdlib.h>

int troca2(int *a){
    *a = 10;
}
int main(int argc, char** argv) {

    int a =5;
    troca2(&a);
    printf("\n%d", a);
    
    return (0);
}

