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
    strcpy(registro.autor[1], "Deitel, H.M.");
    strcpy(registro.autor[2], "Deitel, P.J.");
    }
