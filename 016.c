// 16 - Construir um programa em "C" que implementa uma agenda eletrônica. O programa
//      deve ter um menu com as seguintes opções:
//          • Entrar um novo nome na agenda.
//          • Imprimir na tela os dados de uma das pessoas cadastradas (conforme
//          solicitação).
//          • Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
//          • Fim
//      Cada entrada da agenda deve ter os seguintes campos:
//          char nome[30];
//          char endereco[100]; char fone[10];
//          long int CEP;
// Obs.: a agenda deve ter capacidade para 100 entradas.

#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){
    char resp=0;
    while((resp == 0) || (resp < 0) || (resp > 4)){
        printf("/* ----------  MENU PRINCIPAL ---------- */\n");
        printf("\n");
        printf("[1] - Inserir Nova Contato\t\t;\n");
        printf("[2] - Localizar Contato\t\t\t;\n");
        printf("[3] - Listar Contatos\t\t\t;\n");
        printf("\n");
        printf("[4] - Sair.\n");
        printf("\n");
        printf("Escolha uma opção: ");
        scanf("%d",&resp);
}
}

