// 11 - Codifique uma função recursiva para exibir um número natural em binário.

#include <stdio.h>

int binario(int numero);

void main(){
    int numero,bin;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero);
    while(numero<0){
        printf("Valor Incorreto! Digite um numero positivo: ");
        scanf("%d",&numero);
    }

    bin = binario(numero);

    printf("O número inteiro positivo %d, convertido em binario é:\n",numero);
    printf("\t\t%d.\n",bin);
}

int binario(int numero){
    if (numero < 2) 
        return numero;
    return ( 10 * binario(numero / 2) ) + numero % 2;
}
