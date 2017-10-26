/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 18:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int num,cont,par=0;
	for(cont=1; cont<=10; cont++)
	{
		printf("%d- Informe um numero:\t",cont);
		scanf("%d",&num);
		if(num%2) par+= 1;
	}
	printf("\nA quantidade de numeros pares e :%d\n",par);
	system("pause >nul");
	return 0;
}


