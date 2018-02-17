// 15 - Fazer um programa em C, utilizando passagem de parâmetros, que lê uma lista de 20
// produtos e preços e armazená-los em um array do tipo da estrutura abaixo. O programa
// deve, em seguida, ordenar o vetor em ordem alfabética de nome de produto e
// inflacionar os produtos cujo valor for menor que 100 em 5%. Por fim a lista de
// produtos/preços deve ser impressa. OBS: usar uma rotina que recebe uma estrutura dotipo PROD com parâmetro e atualiza o
// preço, uma que lê̂ os dados para a estrutura do
// tipo PROD e outra capaz de imprimir a estrutura.

#include <stdio.h>

typedef struct TProd {
    char titulo[15];
    float pVenda;
} TProd;

void attPreco();
void ordProd();
void printList(TProd prod);

int main(){
    char *pAux;
    TProd produto[2];
    printf("Cadastro de Produtos:\n");
    for (int i = 0; i < 2; i++) {
        printf("Entre com o nome do produto [%d]: ",i+1);
        scanf(" %[^\n]s",produto[i].titulo);
        printf("Entre com o valor para %s:",produto[i].titulo);
        scanf("%f",&produto[i].pVenda);        
    }
    ordProd();
    for (int i = 0; i < 2; i++) {
        printList(produto[i]);        
    }
}

void attPreco(){

}

void ordProd(){

}

void printList(TProd prod){
        printf("[%d] - %s\t:\t%.2f.\n",i+1,prod.titulo,prod.pVenda);
}
