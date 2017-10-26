/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 26 de Outubro de 2017, 18:20
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int i, num, div; 


    printf("Insira um numero ");
    scanf("%d", &num);
   
    //while (x <= 0);
  
  for (i = 1; i <= num; i++) {
    if (num % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("%d é primo!!", num);
  else
    printf("%d não é primo!!", num);

    return (0);
}

