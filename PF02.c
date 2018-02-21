/*
 * Questão: 02.
 * Nome: Carlos Ramon Moreira Leite
 * RGA: 201711316032
 *
 */

#include <stdio.h>

int main(){
    char s[30];
    int i = 0,j = 0, k = 0;
    printf("Entre com uma frase ou palavra: ");
    scanf(" %[^\n]s",s);
    while(s[k]!='\0') {
        if (s[k]!=' ') {
            i++;
        } else {
            j++;
        }
        k++;
    }
    if (j != 0) {
        printf("O número de caracteres em sua frase é: %d. Sendo %d espaços em branco.\n",i,j);
    } else {
        printf("O número de caracteres em sua palavra é: %d.\n",i);
    }
}
