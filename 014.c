// 14 - Fazer um programa em "C" que lê̂ uma string do teclado e se utiliza de uma função para
// imprimir a string de maneira normal e de trás para diante.

#include <stdio.h>

void normalPrint(char frase[50]);
void reversePrint(char frase[50]);

int main(){
    char frase[50];
    printf("Digite uma frase: ");
    scanf(" %[^\n]s",frase);

    printf("\nPrint em modo normal:\n");
    normalPrint(frase);
    printf("\n\nPrint em modo Reverso:\n");
    reversePrint(frase);
    printf("\n");
}

void normalPrint(char frase[50]){
    printf("%s", frase);
}

void reversePrint(char frase[50]){
    int i=0;
    while(frase[i] != '\0'){
        i++;
    }
    for (int j = i ; j!= -1 ; j--) {
        printf("%c",frase[j]);
    }
}
