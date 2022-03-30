/**
 * @file aula17-ex1.c
 * @author Joshua Barbosa
 * @brief 3) Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:
  a)Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda,
  que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre
  as suas 5 bandas favoritas;
  b)Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e
   preencher, exiba todas as informações das bandas/estruturas.
  c)Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir
   informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
  d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking.
  e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
  f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e todas as opções das questões passadas.
 * @date 2022-03-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    //Declara uma estrutura chamada Banda com nome, tipo, integrantes e ranking;
        char nome[51], tipo[20];
        int integrantes, ranking;
    } Banda;

/**
* Preencher Banda
* \param ptr_bandas vetor passado por referencia para bandas;
*/
void preencherBanda(Banda* ptr_bandas){
    //Começo da função

    for (int i = 0; i < 5; i++) {
        //Laço de repetição para salvar valores;
        printf("AVISO - CASO HAJA DADOS SALVOS, CADASTRAR NOVOS IRA SOBREESCREVER OS ANTIGOS.\n\n");

        printf("(%d/5) Insira nome da banda: ", i+1 );
        fgets(ptr_bandas[i].nome, 51, stdin);
        ptr_bandas[i].nome[strcspn(ptr_bandas[i].nome, "\n")]='\0';
        setbuf(stdin, NULL);
        //Salvando o nome da banda;

        printf("(%d/5) Insira tipo da banda: ", i+1 );
        fgets(ptr_bandas[i].tipo, 20, stdin);
        ptr_bandas[i].tipo[strcspn(ptr_bandas[i].tipo, "\n")]='\0';
        setbuf(stdin, NULL);
        //Salvando o tipo da banda;

        do{
            printf("(%d/5) Insira da Ranking de 1 ate 5: ", i+1 );
            scanf("%d", &ptr_bandas[i].ranking);
        } while (ptr_bandas[i].ranking < 1 || ptr_bandas[i].ranking > 5);
        //Laço de repetição para garantir que o valor de ranking esteja salvo com os parâmetros corretos;

        printf("(%d/5) Insira quantidade de integrantes: ", i+1 );
        scanf("%d", &ptr_bandas[i].integrantes);
        setbuf(stdin, NULL);
        //Salvando a quantidade de integrantes da banda;

        printf("\n");
    }
    return;
} //Fim função

/**
* Exibir Banda
* \param ptr_bandas vetor passado por referencia para bandas;

*/
void exibirBanda(Banda ptr_bandas[]){
    int tipoExistente=0, escolha;
    //Declarações de variáveis auxiliares;

    printf("Consultar banda de qual ranking?");
    scanf("%d", &escolha);
    //Entrada da escolha do usuário;

    printf("\n\n--> Informacoes da banda de ranking %d:\n", escolha);

    for (int i = 0; i < 5; i++) {
        //Laço de repetição para comparação e exibição;
        if(escolha == ptr_bandas[i].ranking){
            //Comparando se existe algum item que bate com a escolha;
            printf("Nome: %s\n", ptr_bandas[i].nome);
            printf("Tipo: %s\n", ptr_bandas[i].tipo);
            printf("Ranking: %d\n", ptr_bandas[i].ranking);
            printf("Integrantes: %d\n", ptr_bandas[i].integrantes);
            printf("\n");
            //Exibe
            tipoExistente++;
            //Contador auxiliar;
        }
    }

    if(tipoExistente == 0){
        printf("Nenhuma banda nessa posicao encontrada!\n");
    } //Laço de repetição para verificar a existencia do ranking;

    return;
} //Fim struct

/**
* Exibir Tipo
* \param ptr_bandas vetor passado por referencia para bandas;
*/
void exibirTipo(Banda ptr_bandas[]){
    int tipoExistente;
    //Variável auxiliar;
    char escolhaTipo[20];
    //Variável para escolha;

    printf("Exibir bandas de qual tipo?");
    fgets(escolhaTipo, 20, stdin);
    escolhaTipo[strcspn(escolhaTipo, "\n")]='\0';
    setbuf(stdin, NULL);
    //Entrada da escolha

    printf("\n\n--> Nome de bandas do tipo %s:\n", escolhaTipo);

    for (int i = 0; i < 5; i++){
        //Laço de repetição para comparação;
        if(strcasecmp(escolhaTipo,ptr_bandas[i].tipo) == 0){
            tipoExistente++;
            printf("Banda: %s\n", ptr_bandas[i].nome);
        } //Estrutura para comparar o tipo;
    }

    if(tipoExistente == 0){
        printf("Nenhuma banda com esse tipo encontrada!\n");
    } //Estrutura para verificar a existencia;

    return;
} //Fim struct

void consultarFavorito(Banda ptr_bandas[]){
    int tipoExistente;
    //Variavel auxiliar;
    char escolhaTipo[20];
    //Variavel para escolha;

    printf("Insira um nome de banda: ");
    fgets(escolhaTipo, 20, stdin);
    escolhaTipo[strcspn(escolhaTipo, "\n")]='\0';
    setbuf(stdin, NULL);
    //Entrada da escolha;

    //Comparação com o nome;
    for (int i = 0; i < 5; i++){

        //Caso exista
        if(strcasecmp(escolhaTipo,ptr_bandas[i].nome) == 0){
            tipoExistente++;

        }
    }

    //Verificação
    if(tipoExistente > 0){
        printf("Essa banda esta entre as favoritas!\n");
    } else {
        printf("Essa banda nao esta entre as favoritas!\n");
    }

    return;
} //Fim struct

int main(){
    Banda ptr_bandas[5];
    int escolhaMenu;
    //Declara as variáveis;

    printf("--Bem vindo!--\n");
    //Estrutura para o MENU
    while (escolhaMenu!=0) {
        printf("\n");
        printf("-> Menu\n-> 1: Cadastrar bandas\n-> 2: Exibir Bandas por Ranking\n-> 3: Exibir Bandas por Tipo\n");
        printf("-> 4: Consultar banda\n-> 0: Sair\n\n ");
        printf("O que deseja fazer? -> ");
        scanf("%d", &escolhaMenu);
        setbuf(stdin, NULL);
        //Comparação de casos com a escolha usuario;
        switch (escolhaMenu) {
            case 0:
                break;

            case 1:
                preencherBanda(ptr_bandas);
                system("cls");
                break;

            case 2:
                exibirBanda(ptr_bandas);
                break;

            case 3:
                exibirTipo(ptr_bandas);
                break;

            case 4:
                consultarFavorito(ptr_bandas);
                break;

            default:
            printf("Opcao nao encontrada!\n");
            break;

        }
        setbuf(stdin, NULL);
    }
    //Saida do programa
    printf("\n\nObrigado por utilizar nosso software!\n");
    return 0;
}//main
