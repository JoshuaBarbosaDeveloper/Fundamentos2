/*
@file: P2.case;
@author: Joshua Barbosa;
@date: 04 Mar 2022;
@brief: Faça um programa que ele receba um número e retorne
se é par ou impar;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar as variaveis;
    //Recebe um numero;
    //Se o resto for 0:
        //Par
    //Se nao
        //Impar

    int number; //Declara variavel;

    printf("Verificador de numero:\n");
    printf("Insira um numero: "); //Exibe algo para o usuario;
    scanf("%i", &number); //Le o dado inserido;

    if (number%2==0){ //Caso o resto for 0;
        printf("Par!"); //Exibe PAR;
        } else { //Se nao;
        printf("Impar!"); //Exibe IMPAR;
        }

    printf("\n\nObrigado por utilizar nosso software."); //Agradecimento;
    return 0; //Finaliza;
}
