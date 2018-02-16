// 01 - Dados 2 números, imprimí-los em ordem crescente. Ordem crescente quando um é menor ou igual ao seguinte.
//
// Aluno: Carlos Ramon Moreira Leite
// RGA: 201711316032

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if (a<b) {
        printf("\n%d e %d.\n",a,b);
    } else {
        printf("\n%d e %d.\n",b,a);
    }
}
