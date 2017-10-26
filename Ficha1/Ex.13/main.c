/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 13 de Outubro de 2017, 15:37
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int horas, minutos, segundos, total, music_min, music_seg;
    
    puts("Indique os minutos da musica 1");
    scanf("%d", &music_min);
    total += music_min * 60;
    puts("Indique os segundos da musica 1");
    scanf("%d", &music_seg);
    total += music_seg;
    
    puts("Indique os minutos da musica 2");
    scanf("%d", &music_min);
    total += music_min * 60;
    puts("Indique os segundos da musica 2");
    scanf("%d", &music_seg);
    total += music_seg;
    
    puts("Indique os minutos da musica 3");
    scanf("%d", &music_min);
    total += music_min * 60;
    puts("Indique os segundos da musica 3");
    scanf("%d", &music_seg);
    total += music_seg;
    
    puts("Indique os minutos da musica 4");
    scanf("%d", &music_min);
    total += music_min * 60;
    puts("Indique os segundos da musica 4");
    scanf("%d", &music_seg);
    total += music_seg;
    
    puts("Indique os minutos da musica 5");
    scanf("%d", &music_min);
    total += music_min * 60;
    puts("Indique os segundos da musica 5");
    scanf("%d", &music_seg);
    total += music_seg;
    
    horas = total / (60 * 60);
    minutos = total % (60 * 60) / 60;   
    segundos = total - (horas + minutos) * 60;
    
    printf("A duração do album é de %dh:%dmin:%dseg", horas, minutos, segundos);
    return (0);
}

