// 15 - Fazer um programa em C, utilizando passagem de parâmetros, que lê uma lista de 20
// produtos e preços e armazená-los em um array do tipo da estrutura abaixo. O programa
// deve, em seguida, ordenar o vetor em ordem alfabética de nome de produto e
// inflacionar os produtos cujo valor for menor que 100 em 5%. Por fim a lista de
// produtos/preços deve ser impressa. OBS: usar uma rotina que recebe uma estrutura dotipo PROD com parâmetro e atualiza o
// preço, uma que lê̂ os dados para a estrutura do
// tipo PROD e outra capaz de imprimir a estrutura.

#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct TProd {
    char titulo[25];
    float pVenda;
} TProd;

void attPreco(TProd *aux);
void ordProd(TProd *ord);
void printList(TProd *prod);

int main(){
    int j=0;
    TProd produto[MAX];
    printf("Cadastro de Produtos:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Entre com o nome do produto [%d]: ",i);
        scanf(" %[^\n]s",produto[i].titulo);
        printf("Entre com o valor para %s:",produto[i].titulo);
        scanf("%f",&produto[i].pVenda);        
    }
    attPreco(produto);
    ordProd(produto);
    printList(produto);        
}

void attPreco(TProd *aux){
    for (int i = 0; i < MAX; i++) {
        if (aux[i].pVenda <= 100) {
            aux[i].pVenda *= 1.05;
        }
    }
}

void ordProd(TProd *ord){
    int j = 0,aux2;
    char aux[15];
    for (int i = 0; i < MAX; i++) {
        while(ord[i].titulo[j]!='\0'){
            j++;
        }
        for (int k = 0; k < j; k++) {
            if (ord[i].titulo[k]>=97) {
                ord[i].titulo[k]-=32;
            }
        }
    }
    for (int j = 0; j < MAX; j++) {
        for (int i = 0; i < (MAX-1); i++) {
            if (strcmp(ord[i].titulo,ord[i+1].titulo)>0) {

                strcpy(aux,ord[i].titulo);
                strcpy(ord[i].titulo,ord[i+1].titulo);
                strcpy(ord[i+1].titulo,aux);

                aux2 = ord[i].pVenda;
                ord[i].pVenda = ord[i+1].pVenda;
                ord[i+1].pVenda = aux2;
            }
        }
    }
}

void printList(TProd *prod){
    for (int i = 0; i < MAX; i++) {
        printf("[%d] - %s\t\t:\t%.2f.\n",i,prod[i].titulo,prod[i].pVenda);
    }
}
