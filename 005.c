// 05 - Fazer um programa ler um vetor de inteiros e positivos e imprimir quantas vezes
// aparece o número 1, 3 e 4, nesta ordem. O vetor terá́ no máximo 100 posições. Sair do
// programa quando for digitado -1.

#include <stdio.h>

int main(){
    int aux,vet[100],i=0,resp=0,ch1=0,ch2=0,ch3=0,pri,rest,l=0;
    for (int i = 0; i < 100; i++) {
        vet[i] = 0;
    }
    while (resp == 0){
        printf("\nDigite um valor [%d/100]: ",i+1);
        scanf("%d",&aux);
        if (aux < 0) {
            if (aux == -1) {
                resp=1;
            } else {
                printf("\nValor Incorreto! Use apenas '-1' para SAIR.");
            }
        } else {
        vet[i] = aux;
        i++;
        }
    }
    pri = i / 10;
    rest = i % 10;
    if (rest != 0) {
        pri++;
    }
        printf("\n");

    for (int j = 0; j < pri ; j++) {
        for (int k = 0; k < 10; k++) {
            printf("%3.d, ",vet[l]);
            l++;
        }
        printf("\n");
    }

    for (int j = 0; j < i; j++) {
        if (vet[j] == 1) {
            ch1=1;
        }
        if (vet[j] == 3 && ch1 == 1) {
            ch2=1;
        }
        if (vet[j] == 4 && ch1 == 1 && ch2 == 1) {
            ch3++;
            ch1=0;
            ch2=0;
        }
    }
    if (ch3 == 0) {
        printf("\nNão existe a sequencia 1, 3 e 4 neste vetor.");
    } else {
        printf("\nNessa sequência existem %d vezes que aparecem 1, 3 e 4 (nessa ordem).\n",ch3);
    }
}
