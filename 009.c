// 09 - Fazer um programa em C que leia uma frase e imprima somente as vogais.

#include <stdio.h>

int main(){
    char frase[99];
    int i=0;
    printf("Digite a frase: ");
    scanf(" %[^\n]s",frase);
    do{
        if (frase[i] == 32 || frase[i] == 65 || frase[i] == 69 || frase[i] == 73 || frase[i] == 79 || frase[i] == 85 || frase[i] == 97 || frase[i] == 101 || frase[i] == 105 || frase[i] == 111 || frase[i] == 117) {
            printf("%c",frase[i]);
        }
        i++;
    }while (frase[i] != '\0');
    printf("\n");
}
