/**
 * @file ex2Enum.c
 * @author Joshua Barbosa
 * @brief 2) Crie um programa de cadastro que receba, armazene, e
    em seguida, exiba os dados de 5 pessoas. Cada pessoa possui: nome, idade, peso, data de nascimento,
    brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
    caso estrangeiro, armazene o passaporte.
    Regra: Utilize structs, typedef, union e enum.
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

typedef enum {BRASILEIRO=1, ESTRANGEIRO} Identidade;
//Cria uma enum chamada IDENTIDADE;

typedef struct{
    int dia, mes, ano;
} Nascimento;
//Cria uma estrutura para a data de nascimento;

typedef struct{
    char nome[51];
    float peso;
    int idade;
    Nascimento dataNascimento;
    Identidade identidade;
    union{
        int identidadeCpf, identidadePassaporte;
    } documento;
    //Cria uma union dentro da estrutura;

}Pessoa;
//Cria uma estrutura para o cadastro da pessoa;

int main(){
    Identidade nacionalidade;
    //Declara uma variavel nacionalidade do tipo enum identidade;
    Pessoa pessoaCadastro[5];
    //Declara um vetor para pessoaCadastro do tipo da estrutura pessoa;

    for (size_t i = 0; i < 5; i++){
        //Laço de repetição para pedir o cadastro de 5 pessoas
        printf("Insira nome: ");
        fgets(pessoaCadastro[i].nome, 51, stdin);
        pessoaCadastro[i].nome[strcspn(pessoaCadastro[i].nome, "\n")]='\0';
        setbuf(stdin, NULL);
        //Lê o nome da pessoa, e salva em pessoaCadastro[i];

        printf("Insira idade: ");
        scanf("%d", &pessoaCadastro[i].idade);
        //Lê a entrada idade;

        printf("Insira peso (KG): ");
        scanf("%f", &pessoaCadastro[i].peso);
        //Lê a entrada peso;

        printf("Digite:\n1 para BRASILEIRO(A);\n2 para ESTRANGEIRO(A);\n-->");
        scanf("%d", &nacionalidade);
        //Lê a entrada para nacionalidade;

        printf("Insira dia nascimento: ");
        scanf("%d", &pessoaCadastro[i].dataNascimento.dia);
        printf("Insira mes nascimento: ");
        scanf("%d", &pessoaCadastro[i].dataNascimento.mes);
        printf("Insira ano nascimento: ");
        scanf("%d", &pessoaCadastro[i].dataNascimento.ano);
        //Entradas do dia, mes e ano da data de nascimento;

        printf("\n");

        if(nacionalidade == 1){
            //Estrutura de comparação para saber se é brasileiro ou estrangeiro;
            printf("Brasileiro - Insira Cpf: \n");
            scanf("%d", &pessoaCadastro[i].documento.identidadeCpf);
            //Caso brasileiro;
        } else if (nacionalidade == 2){
            printf("Estrangeiro - Insira Passaporte: \n");
            scanf("%d", &pessoaCadastro[i].documento.identidadePassaporte);
            //Caso estrangeiro;
        }

        printf("\n\nNOVO CADASTRO\n\n")


    }

    return 0;
}
