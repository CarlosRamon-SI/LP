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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 100 //quantidade maxima para registros

typedef struct TCadastro{
    int codigo;
    char nome[30];
    char endereco[100];
    char fone[13];
    long int CEP;
}TCadastro;

int insert(TCadastro *novo,int indice);
void find(TCadastro *seek);
void list(TCadastro *listar);

int main(){

    int menu = 1,ver = 0;
    char resp;
    TCadastro contato[MAX];

    while(menu == 1){
        system("clear");
        printf("\n/* ----------  MENU PRINCIPAL ---------- */\n\n");
        printf("[1] - Inserir Nova Contato\t\t;\n");
        printf("[2] - Localizar Contato\t\t\t;\n");
        printf("[3] - Listar Contatos\t\t\t;\n\n");
        printf("[4] - Sair.\n\n");
        printf("Escolha uma opção: ");
        scanf("%c",&resp);

        switch (resp) {
            case '1':
                system("clear");
                if (ver == (MAX)) { //verificador de capacidade de agenda
                    printf("\nAgenda Lotada.\n");
                } else {
                    printf("\nRegistro n. %d:\n",ver+1);
                    ver = insert(contato,ver);
                }
                break;
            case '2':
                find(contato);
                break;
            case '3':
                list(contato);
                system("pause");
                break;
            case '4':
                menu = 0;
                break;
            default:
                printf("Opção Inválida. Tente novamente.\n");
        }
}
}

int insert(TCadastro *novo,int indice){
    int j = 0;
        novo[indice].codigo = indice;
        printf("\nNome para o novo contato: ");
        scanf(" %[^\n]s",novo[indice].nome);
        printf("Telefone: ");
        scanf(" %[^\n]s",novo[indice].fone);
        printf("Endereço: ");
        scanf(" %[^\n]s",novo[indice].endereco);
        printf("CEP: ");
        scanf("%ld",&novo[indice].CEP);
        while(novo[indice].nome[j]!='\0'){ //contador de quantidade de caracteres não nulos
            j++;
        }
        for (int l = 0; l < j; l++) { //conversor para maiúsculas
            if (novo[indice].nome[l]>=97) 
                novo[indice].nome[l]-=32;
        }
        return ++indice; //retorna o indice para o proximo registro
}

void find(TCadastro *seek){
    char ident[30], resp = 's';
    int count,j = 0;
    while((resp == 's') || (resp == 'S')){
        system("clear");
        printf("Digite o nome do contato: ");
        scanf(" %[^\n]s",ident);
        while(ident[j]!='\0'){ //conta a quantidade de caracteres não nulos
            j++;
        }
        for (int l = 0; l < j; l++) { //converte todos os caracteres minúsculos em maiúsculo
            if (ident[l]>=97)
                ident[l]-=32;
        }
        for (int i = 0; i < MAX; i++) { //compara a busca com todos os nomes registrados
            if(strcmp(seek[i].nome,ident)==0) {
                count++; //contador de registros localizados
                printf("\t%s: %s, %s, %li.\n",seek[i].nome,seek[i].fone,seek[i].endereco,seek[i].CEP);
            }
        }
        if(count == 0){ //verificador de quantidade de registros localizados
            printf("\nNão foram encontrados dados para essa consulta.\n");
        }
        printf("\n\nDeseja realizar nova consulta? [S/N]\n");
        scanf(" %c",&resp);
    }
}

void list(TCadastro *listar){
    char verif, resp = 's';
    int count;
    while((resp == 's') || (resp == 'S')){
        count = 0;
        system("clear");
        printf("Digite uma letra INICIAL: ");
        scanf(" %c",&verif);
        if (verif >= 97) {
            verif -= 32;
        }
        for (int i = 0; i < MAX; i++) {
            if (listar[i].nome[0] == verif) {
                count++;
                printf("%d- %s: %s, %s, %li.\n",listar[i].codigo,listar[i].nome,listar[i].fone,listar[i].endereco,listar[i].CEP);
            }
        }
        if (count == 0) {
            printf("\nNão foram encontrados dados para essa consulta.\n");
        }
        printf("\n\nDeseja realizar nova consulta? [S/N]\n");
        scanf(" %c",&resp);
    }
}
