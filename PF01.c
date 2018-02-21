/*
 * Questão: 01.
 * Nome: Carlos Ramon Moreira Leite
 * RGA: 201711316032
 */
#include <stdio.h>

int main(){
    int conta = 0, dig = 0, aux = 0;
    printf("Entre com o número da conta: ");
    scanf("%d",&conta);
    aux = conta;
    while(aux != 0){
        dig += aux % 10;
        aux /= 10;
    }
    dig = dig % 10;
    printf("O numero da conta com digito verificador: %06d-%d.\n",conta,dig);
}
