/* 
 * File:   main.c
 * Author: joaod
 *
 * Created on 27 de Outubro de 2017, 18:02
 */

#include <stdio.h>
#include <stdlib.h>
#define salario_min 557

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {

    int idade = 1, est_civil, contar = 0, masc_1835_casado, fem_salario_men1500, maior_idade = 0, menor_idade = 150;
    double salario, conta_salario, salario_final, media_salario;
    char sexo;

    while (idade > 0) {

        printf("Inquérito %d.\n", contar + 1);

        //Idade
        do {
            puts("Qual é a idade?");
            scanf("%d", &idade);
        } while (idade > 0 && !(idade >= 16 && idade <= 150));

        if (idade < 0) {
            break;
        }

        //Sexo
        limparBufferEntrada();

        do {
            puts("Qual o sexo (M ou F)");
            scanf("%c", &sexo);

            if (sexo == 'M' || sexo == 'm') {
                printf("Sexo Masculino!\n");
            } else if (sexo == 'F' || sexo == 'f') {
                printf("Sexo Feminino!\n");
            } else {
                printf("Sexo inválido!\n");
            }

            limparBufferEntrada();
        } while (!(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f'));


        //Estado civil

        do {
            puts("Estado civil (1-Solteiro, 2-Casado, 3-Divorciado, 4-Viuvo");
            scanf("%d", &est_civil);

            if (est_civil == 1) {
                printf("Solteiro!\n");
            } else if (est_civil == 2) {
                printf("Casado!\n");
            } else if (est_civil == 3) {
                printf("Divorciado!\n");
            } else if (est_civil == 4) {
                printf("Viuvo!\n");
            } else {
                printf("Estado civil invalido!\n");
            }
            limparBufferEntrada();
        } while (!(est_civil >= 1 && est_civil <= 4));


        //Salario

        do {
            puts("Qual é o seu salário");
            scanf("%lf", &salario);

            if (salario > salario_min) {
                ++conta_salario;
                salario_final += salario;
            } else {
                printf("Salario abaixo do minimo!\n");
            }
        } while (!(salario > salario_min));



        //Maior e menor de idade
        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if (idade < menor_idade) {
            menor_idade = idade;
        }


        //Media dos salarios
        media_salario = salario_final / conta_salario;

        //feminino com salário até 1500€
        if (sexo == 'F' || sexo == 'f' && salario <= 1500) {
            ++fem_salario_men1500;
        }

        //sexo masculino, idade entre 18 e 35 e casados 
        if (sexo == 'M' || sexo == 'm' && idade >= 18 && idade <= 35 && est_civil == 2) {
            ++masc_1835_casado;
        }

        limparBufferEntrada();
        ++contar;
    }

    printf("Maior idade %d\n", maior_idade);
    printf("Menor idade %d\n", menor_idade);
    printf("Media de salarios %.2lf€\n", media_salario);
    printf("São %d as mulheres com ordenado até 1500€ \n", fem_salario_men1500);
    printf("São %d os homens casados entre os 18 e 35 anos.", masc_1835_casado);

    return (0);
}