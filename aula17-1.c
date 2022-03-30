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
* \param hora passa a variavel hora;
* \param min passa a variavel min;
* \param seg passa a variavel sec;
*/

void converteHora(int total_segundos, int* hora, int* min, int* seg){
    int resto;
    //Declara variável para resto;
    (*hora)= total_segundos / 3600;
    //Passa para o endereço da variável hora seu valor de segundos em horas;
    resto = total_segundos % 3600;
    //Variável auxiliar para restos;
    (*min) = resto / 60;
    //Passa para o endereço da variável min seu valor de segundos em minutos, realizando uma divisão;
    (*seg) = resto % 60;
    //Passa para o endereço da variável seg seu valor de segundos em minutos, realizando o resto;

    return;

}

int main(){
    int total_segundos, hora=0, min=0, seg=0;
    //Declara as variáveis;

    printf("Insira total segundos:");
    scanf("%d", &total_segundos);
    //Solicita e lê o total de segundos;

    converteHora(total_segundos, &hora, &min, &seg);
    //Chama a função;

    printf("\n%.2d:%.2d:%.2d\n", hora, min, seg);
    //Exibe;




  return 0;
}//main
