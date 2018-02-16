// 05 - Fazer um programa ler um vetor de inteiros e positivos e imprimir quantas vezes aparece o número 1,3 e 4, nesta
// ordem. O vetor terá no máximo 100 posições. Sair do programa quando for digitado -1.
//
// Aluno: Carlos Ramon Moreira Leite
// RGA: 201711316032

#include <stdio.h>

int main(){
    int i=0,vet[];
    printf("\nEntre com valores positivos. [-1 para Sair].\n");
    while((vet[i]>=0) || (i<101)){
        scanf(" %[^\n]d",vet[i]);
        i++;
    }
    for (int j = 0; j < i; i++) {
        printf("\n%d",vet[j]);
        
    }
