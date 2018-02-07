// 04 - Dado N >= 0 inteiro e X real, calcular o valor da soma: 1 + x + x 2 + ⋯ + x n.

#include <stdio.h>

int pot(int x, int n);

int main(){
    int x,n,resultado=0;
    printf("Digite o valor de base(x): ");
    scanf("%d", &x);
    printf("Digite o valor de potencia(n): ");
    scanf("%d", &n);
    while (n<0){
        printf("Valor Incorreto! Digite um valor <MAIOR> ou <IGUAL> a [ZERO]: ");
        scanf("%d", &n);
    }
    resultado = pot(x,n);
    printf("O resultado de (x^0 + x^1 + x^2 + ⋯  + x^n) para  %d^%d = %d.\n", x, n, resultado);
}

int pot(int x, int n){
    int soma = x;
    if (n == 0) {
        return 1;
    } else if (n == 1){
        return x + pot(x,n-1);
    } else {
        for (int i = 1; i < n; i++) {
            soma *= x;
        }
        return soma + pot(x,n-1);
    }
}
