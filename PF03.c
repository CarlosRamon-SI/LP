/*
 * Questão: 03.
 * Nome: Carlos Ramon Moreira Leite
 * RGA: 201711316032
 */

#include <stdio.h>
# define MAX 3

int main(){
    int matriz[MAX][MAX];
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("Entre com o valor para Matriz[%d,%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Matriz completa: \n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("%d | ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal Principal: \n");
    for (int i = 0; i < MAX; i++) {
            printf("%d | ",matriz[i][i]);
    }
    printf("\n");
}
