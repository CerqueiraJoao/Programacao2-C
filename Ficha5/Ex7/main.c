/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 16 de Novembro de 2017, 10:35
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 10

void Array_a(int a[]) {
    int i;

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Indique o numero para o vetor A");
        scanf("%d", &a[i]);
    }
}

void Array_b(int b[]) {
    int i;

    for (i = 0; i < NUM_MAX; ++i) {
        puts("Indique o numero para o vetor B");
        scanf("%d", &b[i]);
    }
}

void Array_c(int a[], int b[], int c[]) {
    int i;

    puts("\nDados vetor C");

    for (i = 0; i < NUM_MAX; ++i) {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
}

void Array_d(int a[], int b[], int d[]) {
    int i, j, contar = 0, contar_array = 0;

    puts("\nDados do vetor A mas não do B");

    for (i = 0; i < NUM_MAX; ++i) {
        for (j = 0; j < NUM_MAX; ++j) {
            if (a[i] == b[j]) {
                break;
            } else {
                ++contar;
            }
        }

        if (contar == NUM_MAX) {
            d[contar_array] = a[i];
            ++contar_array;
        }
        contar = 0;
    }

    for (i = 0; i < contar_array; ++i) {
        printf("%d ", d[i]);
    }
}

void Array_e(int a[], int b[], int e[]) {
    int i, j, k, contar = 0, contar_array = 0;

    puts("\nValores repetidos em A e B");

    for (i = 0; i < NUM_MAX; ++i) {
        for (j = 0; j < NUM_MAX; ++j) {
            if (a[i] == b[j]) {
                for (k += i + 1; k < NUM_MAX; ++k) {
                    if (a[i] == a[k]) {
                        ++contar;
                    }
                }

                for (k = i + 1; k < NUM_MAX; ++k) {
                    if (b[i] == b[k]) {
                        ++contar;
                    }
                }

                if (contar == 0) {
                    e[contar_array] = a[i];
                    ++contar_array;
                }
            }
        }
    }

    for (i = 0; i < contar_array; ++i) {
        printf("%d ", e[i]);
    }
}

int main(int argc, char** argv) {

    int a[NUM_MAX], b[NUM_MAX], c[NUM_MAX], d[NUM_MAX], e[NUM_MAX];

    Array_a(a);
    Array_b(b);
    Array_c(a, b, c);
    Array_d(a, b, d);
    Array_e(a, b, e);

    return (0);
}

