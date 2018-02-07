// 09 - Fazer um programa em C que leia uma frase e imprima somente as vogais.

#include <stdio.h>

int main(){
    char frase[25];
    int i=0;
    printf("Digite a frase: ");
    scanf(" %[^\n]s",frase);
    while (frase[i] != '\0'){
        printf("%c",frase[i]);
        i++;
    }
}
