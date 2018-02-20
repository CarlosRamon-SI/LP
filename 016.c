// 16 - Construir um programa em "C" que implementa uma agenda eletrônica. O programa
//      deve ter um menu com as seguintes opções:
//          • Entrar um novo nome na agenda.
//          • Imprimir na tela os dados de uma das pessoas cadastradas (conforme
//          solicitação).
//          • Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
//          • Fim
//      Cada entrada da agenda deve ter os seguintes campos:
//          char nome[30];
//          char endereco[100]; 
//          char fone[10];
//          long int CEP;
// Obs.: a agenda deve ter capacidade para 100 entradas.

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct TCadastro{
    int codigo;
    char nome[30];
    char endereco[100];
    char fone[11];
    long int CEP;
}TCadastro;

void insert(TCadastro *novo,int *indice);
void find(TCadastro *seek);
void list(TCadastro *listar);

int main(){

    int resp=0,menu=1,ver = 0;
    TCadastro contato[MAX];

    for (int i = 0; i < MAX; i++) {
        contato[i].codigo=-1;        
    }

    while(menu != 0){
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
        switch (resp) {
            case 1:{
                printf("Registro para contato n. %d:\n",ver);
                if (ver == 99) {
                    printf("Agenda Lotada.\n");
                } else {
                    ver = insert(contato,&ver);
                }
                break;
                   }
            case 2:
                find(contato);
                break;
            case 3:
                list(contato);
                break;
            case 4:
                menu = 0;
                break;
            default:
                printf("Opção Inválida. Tente novamente.\n");
        }
}
}

void insert(TCadastro *novo,int *indice){
    int j = 0;
        novo[*indice].codigo = *indice;
        printf("Nome para o novo contato: ");
        scanf(" %[^\n]s",novo[*indice].nome);
        printf("Telefone: ");
        scanf(" %[^\n]s",novo[*indice].fone);
        printf("Endereço: ");
        scanf(" %[^\n]s",novo[*indice].endereco);
        printf("CEP: ");
        scanf("%ld",&novo[*indice].CEP);

        while(novo[*indice].nome[j]!='\0'){
            j++;
        }
        for (int l = 0; l < j; l++) {
            if (novo[*indice].nome[l]>=97) 
                novo[*indice].nome[l]-=32;
        }
        return *indice++;
        printf("%d\n",*indice);
}

void find(TCadastro *seek){
    printf("Find Command.\n");
}

void list(TCadastro *listar){
    char verif;
    printf("Digite uma letra INICIAL: ");
    scanf(" %c",&verif);
    if (verif >= 97) {
        verif -= 32;
    }
    for (int i = 0; i < MAX; i++) {
        if (listar[i].nome[0] == verif) {
            printf("%d- %s: %s, ",listar[i].codigo,listar[i].nome,listar[i].fone);
            printf("%s, %li.\n",listar[i].endereco,listar[i].CEP);
        }
    }
    printf("List Command.\n");
}
