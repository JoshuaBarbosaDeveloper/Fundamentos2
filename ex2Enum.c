/**
 * @file ex1Enum.c
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

typedef struct{
    int dia, mes, ano;
} Nascimento;

typedef struct{
    char nome[51];
    float peso;
    int idade, nacionalidade;
    Nascimento dataNascimento;
    Identidade identidade;
    union{
        int identidadeCpf, identidadePassaporte;
    } documento;
}Pessoa;

int main(){

    Pessoa pessoaCadastro[5];

    for (size_t i = 0; i < 1; i++){
        printf("Insira nome: ");
        fgets(pessoaCadastro[i].nome, 51, stdin);
        pessoaCadastro[i].nome[strcspn(pessoaCadastro[i].nome, "\n")]='\0';
        setbuf(stdin, NULL);

        //printf("Insira nacionalidade: ");
        //fgets(pessoaCadastro[i].nacionalidade, 21, stdin);
        //pessoaCadastro[i].nacionalidade[strcspn(pessoaCadastro[i].nacionalidade, "\n")]='\0';
        //setbuf(stdin, NULL);

        printf("Insira idade: ");
        scanf("%d", &pessoaCadastro[i].idade);

        printf("Insira peso: ");
        scanf("%f", &pessoaCadastro[i].peso);
        
        printf("Digite: 1 para BRASILEIRX;\n 2 para ESTRANGEIRX:\n");
        scanf("%d", &pessoaCadastro[i].nacionalidade);

        printf("Insira dia nascimento: ");
        scanf("%d", &pessoaCadastro[i].dataNascimento.dia);
        printf("Insira mes nascimento: ");
        scanf("%d", &pessoaCadastro[i].dataNascimento.mes);
        printf("Insira ano nascimento: ");
        scanf("%d", &pessoaCadastro[i].dataNascimento.ano);

        printf("\n");

        if(pessoaCadastro[i].nacionalidade == BRASILEIRO){
            printf("Brasileito - Insira Cpf: \n");
            scanf("%d", &pessoaCadastro[i].documento.identidadeCpf);
        } else if (pessoaCadastro[i].nacionalidade == ESTRANGEIRO){
            printf("Estrangeiro - Insira Passaporte: \n");
            scanf("%d", &pessoaCadastro[i].documento.identidadePassaporte);
        }


    }
    
    

    
    return 0;
}
