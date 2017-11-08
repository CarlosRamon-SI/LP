#include <stdio.h>

int main(){
    int n;
    printf("\n Digite um valor para começar a contagem regressiva\n");
    scanf("%d", &n);
    if (n == 0)
        printf("\n Impossivel realizar contagem regressiva. Valor = <ZERO>.\n");
    for (int i = n; i == 0; i--) {
        printf("%d", i);        
    }
}
