#include <stdio.h>

int main(){
    int n;
    printf("\n Digite um valor para começar a contagem regressiva\n");
    scanf("%d", &n);
    if (n == 0){
        printf("\n Impossivel realizar contagem regressiva. Valor = <ZERO>.\n");
    } else {
    for (n; n > -1; n--) {
        printf("%d\n", n);        
    }}
}
