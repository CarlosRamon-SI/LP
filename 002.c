// 02 - Dado n positivo e uma sequência de n números, calcular a soma dos elementos da
// sequência. Faça um loop para validar se n é maior que zero, ou seja, enquanto n<=0
// exiba uma mensagem de erro e solicite um novo valor de n.

#include <stdio.h>

int main(){
    int n,seq,soma=0;
    printf("Digite um valor inicial: ");
    scanf("%d", &n);
    while(n<0){
        printf("Digite um valor <MAIOR> ou <IGUAL> a [ZERO]: ");
        scanf("%d", &n);
    }
    printf("Digite quantidade de numeros sucessivos à somar: ");
    scanf("%d", &seq);
    while (seq <= 0){
        printf("Valor incorreto! Digite valor maior que [ZERO]: ");
        scanf("%d", &seq);
    }
    for (int i = 0; i < seq; i++) {
        soma += (n + i);
    }
    printf("A soma de %d numeros a partir de %d é = %d.\n", seq, n, soma);
}
