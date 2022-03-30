/**
 * @file aula17-ex1.c
 * @author Joshua Barbosa
 * @brief 2) Reescreva o exercício anterior utilizando a estrutura horário
  (contendo hora, minuto e segundo) e passando a estrutura por referência.
   Utilize o seguinte protótipo da função: void converteHorario(int total_segundos, Horario* hor)
 * @date 2022-03-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        int hora, min, sec;
    } Horario;
    //Declara uma estrutura chamada Horario com hora min e sec,

/**
* Converter tempo em segundos;
* \param total_segundos primeiro numero a ser comparado;
* \param hora passa a variavel hora;
* \param min passa a variavel min;
* \param seg passa a variavel sec;
*/
void converteHora(int total_segundos, Horario* tempo){
    int resto;
    //Declara variável para resto;
    (*tempo).hora = total_segundos / 3600;
    //Passa para o endereço da estrutura.variável hora seu valor de segundos em horas;
    resto = total_segundos % 3600;
    //Variável auxiliar para restos;
    (*tempo).min = resto / 60;
    //Passa para o endereço da estrutura.variável min seu valor de segundos em minutos, realizando uma divisão;
    (*tempo).sec = resto % 60;
    //Passa para o endereço da estrutura.variável seg seu valor de segundos em minutos, realizando o resto;

    return;

}

int main(){
    int total_segundos;
    Horario tempo;
    //Declara as variáveis;

    printf("Insira total segundos:");
    scanf("%d", &total_segundos);
    //Solicita e lê o total de segundos;

    converteHora(total_segundos, &tempo);
    //Chama a função;

    printf("\n%.2d:%.2d:%.2d\n", tempo.hora, tempo.min, tempo.sec);
    //Exibe;




  return 0;
}//main
