#include <stdio.h>

int main(){
    char nome[15];
    float salario,vendas;
    scanf("%s %f %f",nome,&salario,&vendas);
    salario += (vendas*0.15);
    printf("TOTAL = R$ %.2f\n",salario);
}
