// 03 - Dado N >= 0 inteiro e X real, calcular X elevado a potência N (sem usar pow).

#include <stdio.h>

int pot(int x, int n);

int main(){
    int x,n,resultado=0;
    printf("Digite o valor de base: ");
    scanf("%d", &x);
    printf("Digite o valor de potencia: ");
    scanf("%d", &n);
    while (n<0){
        printf("Valor Incorreto! Digite um valor <MAIOR> ou <IGUAL> a [ZERO]: ");
        scanf("%d", &n);
    }
    resultado = pot(x,n);
    printf("O resultado de %d^%d = %d.\n", x, n, resultado);
}

int pot(int x, int n){
    int soma = x;
    if (n == 0) {
        return 1;
    } else if (n == 1){
        return x;
    } else {
        for (int i = 1; i < n; i++) {
            soma *= x;
        }
        return soma;
    }
}
