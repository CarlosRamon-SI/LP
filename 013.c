// 13 - Escreva um programa que inicialize uma variável com os dados do seguinte livro e em
// seguida exiba na tela.
// Titulo                   Autor:                      Editora:            Ano Publicação:
// Java, como programar     Deitel, H.M.; Deitel, P.J.  Prentice Hall       2006

#include <stdio.h>
#include <string.h>

typedef struct TAutor {
    char escritor[15];
} TAutor;

typedef struct TBook {
    char titulo[30];
    char editora[15];
    int ano;
    TAutor autor[2];
} TBook;

int main(){
    TBook registro;
    strcpy(registro.titulo, "Java, como programar");
    strcpy(registro.editora, "Prentice Hall");
    registro.ano = 2006;
    strcpy(registro.autor[0].escritor, "Deitel, H.M.");
    strcpy(registro.autor[1].escritor, "Deitel, P.J.");

    printf("Titulo:\t\t\tAutor:\t\t\t\tEditora:\tAno Publicação:\n");
    printf("%s\t%s;%s\t%s\t%d\n",registro.titulo,registro.autor[0].escritor,registro.autor[1].escritor,registro.editora,registro.ano);
}
