// 04 - Dado 'n >= 0' inteiro e 'x' real, calcular o valor da soma: 1 + x + x² + ... + x^(n).
//
// Aluno: Carlos Ramon Moreira Leite
// RGA: 201711316032

#include <stdio.h>

int pot(int a,int b);

int main(){
    int x,n,result=0;
    printf("\nDigite o valor de base: ");
    scanf("%d",&x);
    printf("\nDigite o valor do Expoente: ");
    scanf("%d",&n);
    while(n<0){
        printf("\nValor incorreto. Entre com valor <MAIOR> ou <IGUAL> a [ZERO].");
        scanf("%d",&n);
    }
    for (int i = 0; i < (n+1); i++) {
        result += pot(x,i);
    }
    printf("\n - %d^(%d) = %d.\n",x,n,result);
}
int pot(int a,int b){
    int parcial=b;
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return a;
    } else {
        for (int i = 0; i < (b-1); i++) {
            parcial *= b; 
        }
        return parcial;
    }
}
