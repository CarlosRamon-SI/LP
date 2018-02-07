// 01 - Dados 2 números imprimi-los em ordem crescente. Ordem crescente quando um é menor ou igual ao seguinte.

#include <stdio.h>

int main(){
    int a,b;
    printf("Digite dois valores para A e B:\n");
    scanf("%d %d", &a, &b);
    if (a > b) {
        a += b;
        b = a - b;
        a -= b;
    }
    printf("Os valores ordenados são %d e %d.\n",a,b);
}
