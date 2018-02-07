// 07 - Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada um
// dos N alunos e calcular a média aritmética das notas. Contar quantos alunos estão com
// a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir
// mensagem: Não há nenhum aluno com nota acima de 5.

#include <stdio.h>

typedef struct TAluno {
    char nome[15];
    int nota;
} TAluno;

int main(){
    TAluno registro[3];
    float media=0;
    int cont=0;
    for (int i = 0; i < 3; i++) {
        printf("Digite o Nome do Aluno: ");
        scanf(" %[^\n]s",registro[i].nome);
        printf("Digite sua nota: ");
        scanf("%d",&registro[i].nota);
    }
    for (int i = 0; i < 3; i++) {
        media += registro[i].nota;
        if (registro[i].nota >= 5) {
            cont++;
        }
    }
    if (cont == 0) {
        printf("Não há nenhum aluno com nota acima de 5.\n");
    } else {
        printf("Há %d alunos com nota acima de 5.\n",cont);
    }
    printf("A média aritmética das notas dos alunos registrados é %.2f.\n",media/3);
}
