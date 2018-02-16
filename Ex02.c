// 02 - Dado 'n' positovo e uma sequência de 'n' números, calcular a soma dos elementos da sequência. Faça um loop para
// validar se 'n' é maior que zero, ou seja, enquanto 'n<=0' exiba uma mensagem de erro e solicite um novo valor de 'n'.
//
// Aluno: Carlos Ramon Moreira Leite
// RGA: 201711316032

#include <stdio.h>

int main(){
    int n,seq,total=0;
    printf("\nDigite o valor inicial: ");
    scanf("%d",&n);
    printf("\nDigite a quantidade de elementos da sequência: ");
    scanf("%d",&seq);
    while(seq<=0){
        printf("\nValor incorreto digitado. Ente com valor <MAIOR> que [ZERO].");
        scanf("%d",&seq);
    }
        for (int i = 0; i < seq; i++) {
        total += (n+i);
    }
    printf("\nA soma dos elementos é igual a: %d.\n",total);
}
