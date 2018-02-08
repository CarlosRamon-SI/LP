// 10 - Escreva um programa que solicite dois caracteres de A a Z ao usuário e imprima o
// número de caracteres existente entre eles. Assuma que o usuário digite os 2 caracteres em ordem alfabética. Caso não
// o estejam, emitir mensagem de erro. Exemplo: Digite 2 caracteres: j t ; O número de caracteres entre eles é: 9.

#include <stdio.h>

int main(){
    char a, b;
    int cont=0;
    printf("Digite duas letras:\n");
    scanf("\t %[^\n]c",&a);
    if (a >= 97) {
        a -= 32;
    }
    scanf("\t %[^\n]c",&b);
    if (b >= 97) {
        b -= 32;
    }
    if (a > b) {
        a += b;
        b = a - b;
        a -= b;
    }
    for (int i = a+1; i < b; i++) {
        cont++;
    }
    printf("Existe(m) %d caractere(s) entre %c e %c.\n",cont,a,b);
}
