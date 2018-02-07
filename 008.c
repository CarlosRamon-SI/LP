// 08 - Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que
// imprima todos os elementos comuns aos dois vetores.

#include <stdio.h>

int main(){
    int vet1[5],vet2[8];
    for (int i = 0; i < 5; i++) {
        printf("Entre com valor inteiro positivo para V1: ");
        scanf("%d",&vet1[i]);
    }
    for (int i = 0; i < 8; i++) {
        printf("Entre com valor inteiro positivo para V2: ");
        scanf("%d",&vet2[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d, ",vet1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%d, ",vet2[i]);
    }
    printf("\nOs elementos comuns entre os Vetores 1 e 2 são:\n");
    for (int i = 0; i < 8; i++) {
        for (int h = 0; h < 5; h++) {
            if (vet2[i] == vet1[h]) {
                printf("%d, ",vet1[h]);
            }
        }
    }
    printf("\n");
}
