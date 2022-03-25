/**
 * @file aula17-ex1.c
 * @author Joshua Barbosa
 * @brief 1) Escreva um programa que receba um número inteiro representando a quantidade total de segundos e, usando
    passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas, Minutos e Segundos. 
    Imprima o resultado da conversão no formato HH:MM:SS. Utilize o seguinte protótipo da função:
    void converteHora(int total_segundos, int* hora, int* min, int* seg)
 * @version 0.1
 * @date 2022-03-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* Converter tempo em segundos;
* \param total_segundos primeiro numero a ser comparado;
* \param hora primeiro numero a ser comparado;
* \param min primeiro numero a ser comparado;
* \param seg primeiro numero a ser comparado;
*/

void converteHora(int total_segundos, int* hora, int* min, int* seg){

    printf("Valor em segundos: "*total_segundos);
    
}

int main(){
    //Declara variável para tempo em segundos
    int total_segundos = 0, hora, min, seg;
    int* pointer;

    printf("Insira tempo em segundos: \n");
    scanf("%d", &total_segundos);

    pointer = &total_segundos;

    converteHora(*pointer);
    



  return 0;
}//main
