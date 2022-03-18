/**
 * @file ex1Enum.c
 * @author Joshua Barbosa
 * @brief 1) Crie uma enumeração representando os meses do ano.
    Agora, escreva um programa que leia um valor inteiro do
    teclado e exiba o nome do mês correspondente e a
    quantidade de dias que ele possui. 
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef enum { JANEIRO=1, FEVEREIRO, MARCO, ABRIL,
MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, 
NOVEMBRO, DEZEMBRO} Mes;
//Declara um enum chamado Mes, para os meses;

int main(){

    Mes mesEscolhido;
    //Declara uma variável para entrada de dado;

    printf("Inira MES desejado: ");
    scanf("%d", &mesEscolhido);
    //Recebe o valor do usuário;

    switch (mesEscolhido){
    //Estrutura condicional switch para comparar e exibir o mes escolhido. 
    case JANEIRO:
        printf("Janeiro.");
        break;

    case FEVEREIRO:
        printf("Fevereiro.");
        break;

    case MARCO:
        printf("Marco.");
        break;

    case ABRIL:
        printf("Abril.");
        break;

    case MAIO:
        printf("Maio.");
        break;

    case JUNHO:
        printf("Junho.");
        break;

    case JULHO:
        printf("Julho.");
        break;

    case AGOSTO:
        printf("Agosto.");
        break;

    case SETEMBRO:
        printf("Setembro.");
        break;

    case OUTUBRO:
        printf("Outubro.");
        break;

    case NOVEMBRO:
        printf("Novembro.");
        break;

    case DEZEMBRO:
        printf("Dezembro.");
        break;
    
    default:
        printf("Mes invalido.");
        break;
    } //Fim switch;

    return 0; //Fim código.
}
